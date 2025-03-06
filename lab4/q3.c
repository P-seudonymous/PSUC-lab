#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
    int n;
    float x, sum, minus;
    sum = 0.0;
    minus = 0;

    scanf("%f%d", &x, &n);
    
    float term;
    x *= PI/180;

    for(int i = 0; i<=n; i=i+2){
        term = pow(x, i) * pow(-1.0, minus)/tgamma(i+1);
        minus = !minus;
        sum +=term;
    }

    printf("sin(%f) is %f", x, sum);
}
