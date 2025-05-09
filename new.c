#include <stdio.h>


int counter(){
    static int x = 0;
    return x++;
}

int main(){

    for(int i = 0; i<3;i++){
        printf("%d ", counter());
    }

}
