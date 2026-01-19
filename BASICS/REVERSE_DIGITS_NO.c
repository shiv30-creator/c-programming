#include <stdio.h>
int rev_digits(int);


int main()
{
    int rev,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    rev = rev_digits(num);
    printf("reverse of number is  = %d\n",rev);
    return 0;

}

int rev_digits(int num)
{
   int rev = 0,sign = 1;
   if(num == 0)return 0;
   if(num < 0)
   {
    sign = -1;
    num = -num;
   }
   while(num > 0)
   {
       rev = rev * 10 + num % 10;
       num /= 10;
   }
    return rev * sign;
}
