#include <stdio.h>

int main(){
    
    int n;

    scanf("%d", &n);

    if(n<=5){
        printf("Rs. 0.5 fine.");
    }else if(n>5 && n<11){
        printf("Rs. 1.00 fine.");
    }else if(n>10 && n<31){
        printf("Rs. 5.00 fine");
    }else{
        printf("you're cooked lil bro, Rs. 10.00 fine.");
    }

}
