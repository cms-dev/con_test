
#include <cstdio>
#include <cstdlib>

using namespace std;

int provide_random_number() {
  // Chosen by fair dice roll.
  return 4;
}

int main(int argc, char **argv) {

	FILE *fin, *fout, *fifo_in, *fifo_out;

	fin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");
	fifo_in = fopen(argv[1], "w");
	fifo_out = fopen(argv[2], "r");

	int a, b, res;
    int c = provide_random_number();

	fscanf(fin, "%d %d", &a, &b);
	fprintf(fifo_in, "%d %d\n", a, b);
	fflush(fifo_in);
    while (true) {
      fscanf(fifo_out, "%d", &res);
      if (res < 0) {
        fprintf(fifo_in, "%d\n", c);
        fflush(fifo_in);
      } else {
        fprintf(fout, "%d\n", res);
        fflush(fout);
        break;
      }
    }

	if (a+b+c == res) {
		fprintf(stderr, "A-ha, you're the best adding program I've ever met!\n");
		printf("1.0\n");
	} else {
		fprintf(stderr, "How dreadful, never met anyone as dumb as you...\n");
		printf("0.0\n");
	}

	fclose(fin);
	fclose(fout);
	fclose(fifo_in);
	fclose(fifo_out);

}

