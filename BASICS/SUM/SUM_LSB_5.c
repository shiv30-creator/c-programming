#include <stdio.h>
int SUM(void);
#define LSB 5

int main()
{
    int sum;
    sum = SUM();
    printf("sum of 2 digit nos whose lsb is 5 = %d\n",sum);
    return 0;

}

int SUM(void)
{
    int num,sum=0;
    for(num = 10; num <= 99; num++)
    {
        if(num%10 == LSB)
        {
            sum += num;
        }
    }
    return sum;
}
