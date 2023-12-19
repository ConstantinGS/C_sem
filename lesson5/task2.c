#include <stdio.h>
#include <limits.h>


int divSearch(int num1, int num2){
    int count = 1;
    int divisor;

    while (count <= num2)
        {
            if (num2%count==0 && num1%count==0){
                divisor = count;
            }
            count++;
        }

        return divisor;
}


int divMax(int num1, int num2){

    if (num1>num2) return divSearch(num1, num2);
    return divSearch(num2, num1);

}


int main(void){
    int num1, num2;

    scanf("%d%d", &num1, &num2);
    printf("Max divisor = %llu\n", divMax(num1, num2));

    return 0;
}


