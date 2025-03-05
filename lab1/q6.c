#include <stdio.h>

int main(){

#define pi 3.14159
	int r;
	float sa, vol;
	scanf("%d", &r);
	
	sa = 4*pi*r*r;
	vol = (4*pi*r*r*r)/3;

	printf("surface area: %f", sa);
	printf("\nvolume: %f", vol);



}
