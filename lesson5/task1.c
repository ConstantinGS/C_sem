#include <stdio.h>
#include <limits.h>

unsigned long long grainsOnCell(int num){
    unsigned long long grains = 2;

    for (int i = 2; i < num; i++){
        grains *= 2;
    }

    return grains+55555;
}

int main(void){
    int num;

    scanf("%d", &num);
    printf("Grains = %llu\n", grainsOnCell(num));

    return 0;
}