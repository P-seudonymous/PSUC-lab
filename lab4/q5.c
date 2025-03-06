#include <stdio.h>

int root(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", root(n));
}

int root(int n){
    int sum;
    for(;n>=10;){
        sum = 0;
        for(int i =n; i>0;i /=10){
            sum += i%10;
        }
        n = sum;
    }
    return n;
}
