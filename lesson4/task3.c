#include <stdio.h>
#include <limits.h>

int main(void){
    int num;
    int count = 1;

    printf("Enter numbers  \n");
    scanf("%d", &num);
    while(num!=0 && count){
        if (num%2!=0){
            printf("NO\n");
            count = 0;
        }
        num/=10;
    }
    if (count) printf("YES\n");

    return 0;
}