#include <stdio.h>
#include <limits.h>

int luckyNum(int num){
    int sum = 0;
    int mul = 1;

    while(num>0){
        sum+=(num%10);
        mul*=(num%10);
        num/=10;
    } 

    if (sum==mul){
        printf("YES\n");
        return 0;
    } 
    printf("NO\n");
        return 0;
        
}


int main(void){
    int num;
    
    printf("Enter numbers  \n");
    scanf("%d", &num);
    luckyNum(num);

    return 0;
}