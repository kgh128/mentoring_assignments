#include <stdio.h>

int main(void) {
	double *p, j = 20;
	void *v = &j;
	printf("%f", *(double *)v);
	return 0;
}
