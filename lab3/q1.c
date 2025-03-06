#include <stdio.h>

int main(){
    int n, og, rem, rev;
    rev = 0;

    scanf("%d", &n);
    og = n;

    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }if(og == rev){
        printf("palindrome");
    }else{
        printf("not a palindrome");
        }
}
