#include <stdio.h>
int adjust_if_MSB_odd(int num);

int main()
{
    printf("Enter the number : ");
    int num, result;
    scanf("%d",&num);
    result = adjust_if_MSB_odd(num);
    printf("Result :  %d",result);

    return 0;
}
// If MSB is odd, subtract 1 from MSB; otherwise return number unchanged
int adjust_if_MSB_odd(int num)
{
    if(num == 0) return 0;
    int sign = 1;
    if(num < 0)
    {
        num = -num;
        sign = -1;
    }
    int temp=num;
    int power=1;
    while(temp >= 10)
    {
        power *= 10;
        temp /= 10;
    }
    if((num / power) % 2 == 0)
    {
        return num * sign;
    }
    else
    {
        int result=0;
        result = ((num / power) - 1) * power + num % power;

        return result * sign;
    }
}
