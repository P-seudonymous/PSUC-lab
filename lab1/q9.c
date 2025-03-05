#include <stdio.h>

int main(){
	int days, year, week, day;

	scanf("%d", &days);
	
	year = days/365;
	week = (days % 365)/7;
	day = days - ((year*365) + (week*7));

	printf("years: %d", year);
	printf("\nweeks: %d", week);
	printf("\nremaining days: %d", day);

}
