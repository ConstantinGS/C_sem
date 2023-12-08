#include <stdio.h>
#include <limits.h>

int main(void){
    int num1, num2;
    int sumQ;

    printf("Enter two numbers -100 < number < 100 \n");
    scanf("%d%d", &num1, &num2);
    while(num1>100 || num1<-100 || num2>100 || num2<-100 || num1>=num2) {
        printf("Error. Enter two numbers -100 < number < 100\n");
        scanf("%d%d", &num1, &num2);
    }
    for (int i=num1; i<=num2; i++){
        sumQ += i*i;
    }
    printf("%d%d\n", num1, num2);
    printf("Quadrosum = %d\n", sumQ);

    return 0;
}
