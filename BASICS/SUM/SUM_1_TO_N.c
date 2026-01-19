#include<stdio.h>
#define n 5
int SUM(void);

int main()
{
    int sum;
    sum = SUM();
    printf("Sum of 1 to 5 : %d",sum);
    return 0;
}

int SUM(void)
{
    int count,sum=0;
    for(count = 1; count <= n; count++ )
    {
        sum += count;
    }
    return sum;
}
