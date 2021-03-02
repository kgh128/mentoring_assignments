#include <stdio.h>
int main(void) {
	int a = 5, b = 10, c;
	int *p, *q;
	p = &a;
	q = &b;

	c = *p;
	*p = *q;
	*q = c;

	printf("%d %d", a, b);

	return 0;
}
