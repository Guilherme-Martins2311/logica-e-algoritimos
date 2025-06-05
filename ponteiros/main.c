#include <stdio.h>

int y = 5;

void incrementaX(){
    int x = 1;
    while(x < 5){
        x++;
        y--;
    }
}

int main(int argc, char* argv[]){

    int x = 1;

    incrementaX(x);

    printf("y = %d\n", y);
    printf("x = %d", x);


    return 0;
}