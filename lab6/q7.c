#include <stdio.h>


int main(){
  int r, c;
  scanf("%d%d", &r, &c);

  int arr[r][c];

  for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  // 11 12 13
  // row ->

  for(int i = 0; i<r; i++){
    int rowSum = 0;
    for(int j = 0; j<c;j++){
      rowSum += arr[i][j];
    }
    printf("\nrowSum of row -> %d == %d\n", i+1, rowSum);
  }

  // 11
  // 21
  // 31 
  // column ->
  for(int i = 0; i<c; i++){
    int columnSum = 0;
    for(int j = 0; j<r; j++){
      columnSum += arr[j][i];
    }
    printf("\ncolumnSum of column -> %d == %d\n", i+1, columnSum);
  }
}

