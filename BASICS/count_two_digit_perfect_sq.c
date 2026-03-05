#include<stdio.h>
int count_perfect_sq_digits(int num)
{
    int count,two_digit,perfect_sq=0;
    if(num<0)return 0;
    if(num < 0)num = -num;
    while(num >= 10)
    {
        two_digit = num%100;
        for(count = 0; count*count<=two_digit;count++)
        {
            if(count*count == two_digit)
            {
                perfect_sq++;
                break;
            }
        }
        num /= 10;
   }
    return perfect_sq;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int perfect_sq;
    perfect_sq = count_perfect_sq_digits(num);
    printf("count of perfect_sq in no is : %d",perfect_sq);

    return 0;
}
