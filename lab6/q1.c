#include <stdio.h>

int main(){
  int r, c;
  scanf("%d%d", &r, &c);

 if(r!=c){
    printf("not a square matrix, exiting...")
    return 0;
  }

  int arr[r][c];
  for(int i = 0; i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i = 0; i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]!=arr[j][i]){
        printf("not symmetric");
        return 0;
        }
      }
  }
    printf("symmetric");
}
