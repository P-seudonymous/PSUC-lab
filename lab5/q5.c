#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main(){
	int n;

	scanf("%d", &n);

	int arr[100];

	for(int i =0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for (int i = 0 ; i < n; i++){
		if (isPrime(arr[i])){
			printf("%d ", arr[i]);
		}
	}
}

int isPrime(int n){
	if (n<=0||n==1){
		return 0;
	}
	if(n==2||n==3){
		return 1;
	}

	if(n%2==0){
		return 0;
	}
	
	for(int i=0; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
