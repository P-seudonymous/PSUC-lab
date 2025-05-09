#include <stdio.h>
#include <math.h>
// compile with lm flag
// for gcc -> gcc q2.c -o q2 -lm

int main(){
  int r, c;
  scanf("%d%d", &r, &c);

if(r!=c){
    printf("not a Square Matrix...");
    return 0;
  }

  int arr[r][c];

 for(int i = 0; i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d", &arr[i][j]);
    }
  }
  
double norm;

 for(int i = 0; i<r;i++){
    for(int j=0;j<c;j++){
      norm += pow(arr[i][j], 2);
    }
  }

norm = sqrt(norm);

int trace = 0;

for(int i=0;i<r;i++){
    trace += arr[i][i];
  }



  printf("Trace --> %d\n", trace);
  printf("Norm --> %f", norm);
  
}
