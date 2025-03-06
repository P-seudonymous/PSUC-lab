#include <stdio.h>

int main(){
    int n,og, sum;
    sum = 0;

    scanf("%d", &n);
    og = n;

    while(n!=0){
        int i = n %10;
        n = n/10;
        sum += i*i*i;
    }
    if(sum==og){
        printf("armstrong num");
    }else{
        printf("not an armstrong num");
    }
}
