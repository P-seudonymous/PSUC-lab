#include <stdio.h>
int magicSquare(int n, int arr[n][n]);

int main(){
  
  int r, c;
  scanf("%d%d", &r, &c);

  if(r!=c){
    printf("not a square matrix...");
    return 0;
  }

  int arr[r][r];
  for(int i = 0; i<r;i++){
    for(int j = 0; j<r;j++){
      scanf("%d", &arr[i][j]);
    }
  }
  
  magicSquare(r, arr);

}


int magicSquare(int n, int arr[n][n]){
  
  int rowSum, columnSum, trace, trace2;


  for(int i =0; i<n;i++){
    rowSum = 0;
    for(int j = 0; j<n;j++){
      rowSum += arr[i][j];
    }
  }

   for(int i =0; i<n;i++){
    columnSum = 0;
    for(int j = 0; j<n;j++){
      columnSum += arr[j][i];
    }
  }
  trace = 0;
  for(int i = 0; i<n;i++){
    trace += arr[i][i];
  }

  trace2 = 0;
  for(int i =0; i<n;i++){
      trace2 += arr[i][n-i-1];
    }

  if(rowSum == columnSum && columnSum == trace && trace == trace2){
    printf("magicSquare :0");
  }else{
    printf("nop not a magicSquare");
  }

}
