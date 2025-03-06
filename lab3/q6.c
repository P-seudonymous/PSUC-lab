#include <stdio.h>

int main(){
    int n,c;
    c = 0;
    scanf("%d", &n);

    while(n>0){
        if(n>5){
            printf("%d", n);
            break;
        }else{
            printf("hahah easter egg!");
            n--;
            continue;
    }
        c++;
    } 

}
