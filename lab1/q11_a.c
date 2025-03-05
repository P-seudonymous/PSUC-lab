#include <stdio.h>

int main(){

	float u, a ,t ,eqn;
	printf("format u:a:t ");
	scanf("%f%f%f", &u, &a,&t);
	
	eqn = (u*t)+ (1.0/2)*(a*t*t);

	printf("ans: %f", eqn);

}
