#include <stdio.h>


void toBin(int num)
{
    static int counter = 0;
    
    if  (num==0) {
        printf("%d\n", counter);   
        return 0;
    }

    if(num%2==1) counter++;
    toBin(num/2);
}



int main()
{
    int num;

    scanf("%d", &num);
    toBin(num);
}