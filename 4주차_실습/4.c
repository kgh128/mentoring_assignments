#include <stdio.h>
int main(void) {
	int a, b, c, x;
	printf("Input a, b, and c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Input x: ");
	scanf("%d", &x);
	printf("f(%d) = %d\n", x, a*x*x + b*x + c);
	return 0;
}
