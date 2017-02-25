
#include <stdio.h>

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
	return 0;

}

