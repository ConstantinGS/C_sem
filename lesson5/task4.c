#include <stdio.h>
#include <limits.h>

int numSum(int num){
    if(num<=1) return num;
    return num + numSum(num-1); 
    
}


int main(void){
    int num;
    
    printf("Enter number  \n");
    scanf("%d", &num);
    printf("%d \n", numSum(num));

    return 0;
}