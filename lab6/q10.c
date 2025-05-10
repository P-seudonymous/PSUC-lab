#include <stdio.h>
int isLower(int n, int arr[n][n]);


int main(){

  int r,c;
  scanf("%d%d", &r, &c);
  
  if(r!=c){
    printf("Not a square matrix...");
    return 0;
  }

  int arr[r][r];
  

  for(int i = 0; i<r;i++){
    for(int j = 0; j<r;j++){
      scanf("%d", &arr[i][j]);
    }
  }

  if(isLower(r, arr)){
    printf("LTM.");
  }
  else{
      printf("not LTM.");
    }
  }


int isLower(int n, int arr[n][n]){
  for(int i =0; i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i][j]!=0){
        return 0; //not isLower      
        }
    }
  }
  return 1;
}
