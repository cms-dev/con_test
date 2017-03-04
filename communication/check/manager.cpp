
#include <cstdio>
#include <cstdlib>
#include <signal.h>

using namespace std;

int main(int argc, char **argv) {
	signal(SIGPIPE, SIG_IGN);

	FILE *fin, *fout, *fifo_in, *fifo_out;

	fin = fopen("input.txt", "r");
	fout = fopen("output.txt", "w");
	fifo_in = fopen(argv[1], "w");
	fifo_out = fopen(argv[2], "r");

	int a, b, res;
	fscanf(fin, "%d %d", &a, &b);
	fprintf(fifo_in, "%d %d\n", a, b);
	fflush(fifo_in);
	fscanf(fifo_out, "%d", &res);
	fprintf(fout, "%d\n", res);
	fflush(fout);

	if (a+b == res) {
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

