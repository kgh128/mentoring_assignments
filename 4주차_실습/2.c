#include <stdio.h>

int main(void) {
	int age = 0;
	printf("Input your age: ");
	scanf("%d", &age);
	printf("You were born in %d.\n", 2021 - age + 1);
	return 0;
}
