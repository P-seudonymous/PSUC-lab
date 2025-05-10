#include <stdio.h>

int main(){

  int r, c;
  scanf("%d%d", &r, &c);
  
  int arr[r][c];
  
  if(r!=c){
    printf("not a symmetric matrix...");
    return 0;
  }

  printf("input matrix: ");
 for(int i = 0; i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d", &arr[i][j]);
    }
  } 


  int temp;
 for(int i = 0; i<r;i++){
      temp = arr[i][i];
      arr[i][i] = arr[i][r-1-i];
      arr[i][r-1-i] = temp;
    } 

  printf("printing new matrix -> \n");


    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
}
