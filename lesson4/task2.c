#include <stdio.h>
#include <limits.h>

int main(void){
    int num;
    int count = 1;

    printf("Enter numbers  \n");
    scanf("%d", &num);
    while(num/10!=0){
        count++;
        num/=10;
    }
    if(count != 3) printf("NO\n");
    else printf("YES\n");

    return 0;
}