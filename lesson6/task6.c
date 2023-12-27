#include <stdio.h>


int recurs_power(int n, int p)
{
    static int ans = 1;
    if (p==0) return ans;
    ans*=n;
    recurs_power(n, p-1);
}


int main()
{
    int n, p;

    scanf("%d%d", &n, &p);
    printf("%d\n", recurs_power(n, p));

}