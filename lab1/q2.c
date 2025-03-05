#include <stdio.h>

int main(){
	int a, b, sum, diff, prod, q;

	scanf("%d%d", &a, &b);

	sum = a+b;
	printf("the sum is: %d", sum);
	
	diff = a-b;
	printf("\nthe diff is: %d", diff);

	prod = a*b;
	printf("\nthe product is: %d", prod);

	q = a/b;
	printf("\nthe quotient is: %d", q);

}
