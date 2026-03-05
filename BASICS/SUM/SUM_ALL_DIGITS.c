#include <stdio.h>
int sum_total_digits(int);


int main()
{
    int sum,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    sum = sum_total_digits(num);
    printf("sum_total_digits = %d\n",sum);
    return 0;

}

int sum_total_digits(int num)
{
   int sum = 0;
   if(num < 0)num = -num;
   while(num > 0)
   {
       sum += num % 10;
       num /= 10;
   }
    return sum;
}
