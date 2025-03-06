#include <stdio.h>

int factorial(int a);

int main(){

    int n, var;

    scanf("%d", &n);
    
    if(n>0){
        var = factorial(n);
        printf("%d", var);
    
    }else{
        printf("not defined");
    }
}

int factorial(int a){
    
    int f = 1;
    for(int i = 2; i<=a; i++){
        f = f*i;
    }
    return f;    
}


