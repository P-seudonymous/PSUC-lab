#include <stdio.h>
#include <math.h>

int main(){
	
	float p, n, r, si, ci;

	scanf("%f%f%f", &p, &n, &r);

	si = (p * n * r)/100;
	
	ci = (p*pow((1 + r/100), n)) -p;

	printf("simple interest: %f", si);
	printf("compound interest: %f", ci);

/*
/usr/bin/ld: /tmp/ccziYUGT.o: in function `main':
q5.c:(.text+0xb8): undefined reference to `pow'
collect2: error: ld returned 1 exit status
make: *** [<builtin>: q5] Error 1
*/
}
