#include <stdio.h>

int main(){

	int arr[30], n, ele, found;
	found = 0;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	scanf("%d", &ele);

	for(int j = 0; j<n; j++){
		if(arr[j]==ele){
			printf("%d" ,j);
			found =1;
		}
	}
		if(!found){
			printf("ele not found");
	}
}
