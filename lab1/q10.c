#include <stdio.h>

int main(){
	
	int sec, hrs, min, secs;

	scanf("%d", &sec);
	
	hrs = sec/3600;
	min = (sec%3600)/60;
	secs = sec - ((hrs*3600)+(min%60));
	

	printf("hrs: %d", hrs);
	printf("\nmin: %d", min);
	printf("\nremaining secs: %d", secs);
	

}
