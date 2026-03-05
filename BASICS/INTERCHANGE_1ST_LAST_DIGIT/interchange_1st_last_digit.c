#include <stdio.h>
int interchange_first_last_digit(int num);

int main()
{
    printf("Enter the number : ");
    int num;
    scanf("%d",&num);
    int newnum;
    newnum = interchange_first_last_digit(num);
    printf("Interchange of 1st and last digit no is : %d",newnum);

    return 0;
}

int interchange_first_last_digit(int num)
{
    int power = 1,copynum,sign = 1;
    if(num == 0)return 0;
    if(num < 0)
    {
        num = -num;
        sign = -1;
    }
    if(num / 10 == 0) return num * sign;
           
    copynum = num;

    while(copynum >= 10)
    {
        power *= 10;
        copynum /= 10;
    }

   int result = 0;
   result = num / power + ((num % power) / 10) * 10 + (num % 10) * power;

   return result * sign;
}
