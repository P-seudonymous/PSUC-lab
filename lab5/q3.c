#include <stdio.h>

int main(){
	int arr[50], n, pos,ele;

	scanf("%d", &n);
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("input pos and element -> ");
	scanf("%d%d", &pos, &ele);

	for(int i =n; i>n-pos-1; i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;

	for(int i=0; i<n+1; i++){
		printf("%d ", arr[i]);
	}
	



}
