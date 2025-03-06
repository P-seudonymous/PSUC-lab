#include <stdio.h>

int main(){
// selection sort implementation 
	
	for(i = 0; i < n-1; i++) { // loop for number of pass
		pos = i; small = a[i];
			for(j=i+1; j<n; j++) { //loop for searching the smallest
			if(small > a[j]) { // finding the smallest
				pos = j; // pos for interchanging
				small = a[j]; // assigning current small value
			}
		}
		a[pos] = a[i]; //interchanging values
		a[i] = small;
	}


}
