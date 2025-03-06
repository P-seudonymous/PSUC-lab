#include <stdio.h>

int main(){
	
	int arr[50], temp,n;

	scanf("%d", &n);
	
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<n-1; i++){
		for(int j = 0; j <n-i-1; j++){
     			if(arr[j]>arr[j+1]){
     				//temp = arr[j];
     				//arr[j]=arr[j+1];
				//arr[j+1]=temp;
				arr[j] = arr[j]^arr[j+1];
				arr[j+1] = arr[j]^arr[j+1];
				arr[j] = arr[j]^arr[j+1];
				

     }
		}
	}

	printf("largest -> %d, smallest -> %d", arr[n-1], arr[0]);
}
