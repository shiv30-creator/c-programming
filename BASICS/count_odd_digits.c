#include<stdio.h>
int count_odd_digits(int num)
{
    int count = 0,single_digit;
    if(num == 0)return 0;
    if(num < 0)num = -num;
    while(num > 0)
    {
        single_digit = num % 10;
        if(single_digit % 2 != 0)count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int odd_count;
    odd_count = count_odd_digits(num);
    printf("count of odd digits in no is : %d",odd_count);

    return 0;
}
