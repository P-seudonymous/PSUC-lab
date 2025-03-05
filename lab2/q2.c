#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c){
        printf("%d is largest num", a);
    }else if(b>a && b>c){
        printf("\n%d is largest num", b);
    }else{
        printf("\n%d is largest num", c);
    }
}
