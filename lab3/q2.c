#include <stdio.h>

int main() {
    int start, end;
    scanf("%d%d", &start, &end);
    int var = 0, flag = start;
    int prime; 

    while (flag <= end) {
        prime= 1;  
        int count = 2;

        while (count < flag) {
            if (flag % count == 0) {
                prime = 0;
                break; 
            }
            count++;
        }

        if (prime == 1) {
            var++;
            printf("%d ", flag);
        }
        flag++;
    }
 }
