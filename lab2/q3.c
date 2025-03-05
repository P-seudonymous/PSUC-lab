#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float r1, r2, d;
    scanf("%d%d%d", &a,&b,&c);
    
    d = (b*b) - (4*a*c);

    switch(d==0){
        case 1:
            r1 = r2 = (float) -b/(2*a);
            break;
        case 0:
            switch(d<0){
                case 1:
                    printf("%.2f+i%.2f, %.2f + i%.2f", -b / (2.0 * a), sqrt(-d) / (2.0 * a), -b / (2.0 * a), sqrt(-d) / (2.0 * a));
                    return 0;
                case 0:
                    r1 = (-b + sqrt(d))/(2*a);
                    r2 = (-b - sqrt(d))/(2*a);
        }
    }printf("roots -> %.2f, %.2f", r1, r2);

}
