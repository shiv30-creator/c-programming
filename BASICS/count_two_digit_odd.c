#include<stdio.h>
int count_two_digits_odd(int num)
{
    int count = 0,two_digit;
    if(num == 0)return 0;
    if(num < 0)num = -num;
    while(num > 10)
    {
        two_digit = num%100;
        if(two_digit % 2 != 0)count++;
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
    odd_count = count_two_digits_odd(num);
    printf("count of two digits odd in no is : %d",odd_count);

    return 0;
}
