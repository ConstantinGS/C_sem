int main(void){
    int num;
    int sum;
    int mul;
    int iterNum;

    printf("Enter number 10 < number \n");
    scanf("%d", &num);
    while(num<10) {
        printf("Please enter number 10 < number \n");
        scanf("%d", &num);
    }
    for (int i=10; i<num; i++){
        iterNum = i;
        sum = 0;
        mul = 1;
        while(iterNum>0){
            sum+=iterNum%10;
            mul*=iterNum%10;
            iterNum/=10;
        }
        if (sum == mul) printf("%d ", i);
    }

    return 0;
}