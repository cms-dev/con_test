
#include <stdio.h>
#include <stdlib.h>

FILE *fifo_in, *fifo_out;

int add(int a, int b);

int provide_random_number() {
  int c;
  // Sending -1 means that we are requiring a random number from the
  // manager, not that we are submitting the solution.
  fprintf(fifo_out, "-1\n");
  fflush(fifo_out);
  fscanf(fifo_in, "%d", &c);
  return c;
}

int main(int argc, char **argv) {

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

