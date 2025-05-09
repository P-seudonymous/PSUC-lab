#include <stdio.h>

int main(){
  
  int m,n,p;
  // m x n * n x p --> m  
  
  printf("first input -> A[m][n] ");
  scanf("%d%d", &m, &n);

  int A[m][n];  
  
  printf("second input -> B[n, (ALREADY GIVEN so only p)][p] ");
  scanf("%d", &p);
  
  int B[n][p];

  printf("input A[m][n]'s elements: ");
 for(int i = 0; i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d", &A[i][j]);
    }
  }
  
  printf("input B[n][p]'s elements: ");
 for(int i = 0; i<n;i++){
    for(int j=0;j<p;j++){
      scanf("%d", &B[i][j]);
    }
  }

int C[m][p];

 for(int i = 0; i<m;i++){
    for(int j=0;j<p;j++){
      C[i][j] = 0;
    }
  }


 for(int i = 0; i<m;i++){
    for(int k=0;k<p;k++){
      for(int j = 0;j<n;j++){
      C[i][k] += A[i][j] * B[j][k];
      }
    }
  }
  printf("Resulting Matrix C(%dx%d):\n", m, p);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d ", C[i][j]);
      }
      printf("\n");
    }



}
