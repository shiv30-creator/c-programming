#include <stdio.h>
int count_total_digits(int);


int main()
{
    int total_digits,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    total_digits = count_total_digits(num);
    printf("count_total_digits = %d\n",total_digits);
    return 0;

}

int count_total_digits(int num)
{
   int count = 0;
   if(num == 0)return 1;
   if(num < 0)num = -num;
   while(num > 0)
   {
       count++;
       num /= 10;
   }
    return count;
}
