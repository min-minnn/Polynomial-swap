#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 101

typedef struct {
	float coef;
	int expon;
} polynomial;

polynomial a[MAX_TERMS] = { {8,3}, {7,1}, {1,0} };
polynomial b[MAX_TERMS] = { {10,3}, {3,2}, {1,0} };

void swap(polynomial* a, polynomial* b) {
	polynomial temp[MAX_TERMS];

	for (int i = 0; i < 3; i++) {
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}

void print_poly(int s, int e, polynomial* k) {

	for (int i = s; i < e; i++)
		printf("%3.1fx^%d + ", k[i].coef, k[i].expon);

	printf("%3.1fx^%d\n", k[e].coef, k[e].expon);
}

int main(void)
{
	printf("a: ");
	print_poly(0, 2, a);
	printf("b: ");
	print_poly(0, 2, b);
	printf("\n===== SWAP =====\n\n");
	swap(&a, &b);
	printf("a: ");
	print_poly(0, 2, a);
	printf("b: ");
	print_poly(0, 2, b);

	return 0;
}