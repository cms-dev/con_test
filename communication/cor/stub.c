
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);

int main(int argc, char **argv) {

	FILE *fifo_in, *fifo_out;
	fifo_in = fopen(argv[2], "r");
	fifo_out = fopen(argv[1], "w");

	int a, b;
	fscanf(fifo_in, "%d %d", &a, &b);
	fprintf(fifo_out, "%d\n", add(a, b));
	fflush(fifo_out);

	fclose(fifo_in);
	fclose(fifo_out);

	return 0;

}

