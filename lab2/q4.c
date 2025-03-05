#include <stdio.h>

int main(){
    int a, b, c, res;

    scanf("%d%d%d", &a, &b,&c);
    
    res = (a<b && a<c) ? printf("%d", a)  : b<c ? printf("%d", b) : printf("%d", c);





}
