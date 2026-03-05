#include<stdio.h>
int count_single_digit_prime(void);

int main()
{
    int result;
    result = count_single_digit_prime();
    printf("total single digit prime nos : %d",result);
    return 0;
}

int count_single_digit_prime(void)
{
    int count,num,prime,total_count=0;
    for(num = 2;num <10;num++)
    {
         prime = 1;
         for(count = 2;count <= (num/2); count++)
         {
             if(num%count == 0)
             {
                 prime=0;
                 break;
             }

         }
     if(prime == 1)  total_count++;
    }
   return total_count;
}
