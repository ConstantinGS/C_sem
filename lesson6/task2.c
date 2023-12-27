#include <stdio.h>



void print_num(int num1, int num2)
{   
    if (num1<=num2) 
    {
        printf("%d ", num1);
        print_num(num1+1, num2);
    }
}

void print_num_reverse(int num1, int num2)
{
    if (num1>=num2) 
    {
        printf("%d ", num1);
        print_num_reverse(num1-1, num2);  
    }
}



int main()
{
    int A, B;

    scanf("%d%d", &A, &B);
    if (A<B) print_num(A, B);
    else print_num_reverse(A, B);

}