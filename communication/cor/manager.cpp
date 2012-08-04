
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {

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

	fclose(fin);
	fclose(fout);
	fclose(fifo_in);
	fclose(fifo_out);

}

