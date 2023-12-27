#include <stdio.h>
#include <limits.h>

int acounter(void) {
    static int counter = 0;
    char c = getchar();
    
    if (c == 'a') counter++;
    if (c == '.') return counter;
    acounter();
   
}


int main(void){

    printf("%d", acounter());
    return 0;
}