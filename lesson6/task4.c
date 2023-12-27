#include <stdio.h>
#include <limits.h>

int numOdd(void) {
    int number;

    scanf("%d", &number);
    if(number==0) return 0;
    if(number%2==0) return numOdd();
    printf("%d ", number);
    numOdd();
}


int main(void){
    numOdd();
    return 0;
}