
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {

	FILE *fres = fopen(argv[2], "r");
	FILE *fout = fopen(argv[3], "r");

	int a, b;
	fscanf(fres, "%d", &a);
	fscanf(fout, "%d", &b);

	if (a == b) {
		fprintf(stderr, "A-ha, you're the best adding program I've ever met!\n");
		printf("1.0\n");
	} else {
		fprintf(stderr, "How dreadful, never met anyone as dumb as you...\n");
		printf("0.0\n");
	}

	return 0;

}

