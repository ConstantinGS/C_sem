#include <stdio.h>
#include <limits.h>

int main(void){
    int num;
    int reverse = 0;
  
    printf("Enter number 0 < number \n");
    scanf("%d", &num);
    while(num<0) {
        printf("Please enter number 0 < number \n");
        scanf("%d", &num);
    }
    while(num>0){
        reverse = num%10 + reverse * 10;
        num/=10;
    }
    printf("Reverse number = %d\n", reverse);

    return 0;
}