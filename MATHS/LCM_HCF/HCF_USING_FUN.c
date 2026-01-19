#include<stdio.h>
int HCF(int num1, int num2);

 int main()
 {
     printf("Enter two numbers : ");
     int num1,num2;
     scanf("%d %d",&num1,&num2);
     int hcf;
     hcf = HCF(num1,num2);
     printf(" HCF : %d",hcf);

     return 0;
 }

 int HCF(int num1, int num2)
 {
     if(num1 == 0 || num2 == 0 )return 0;
     if(num1 < 0)num1 = -num1;
     if(num2 < 0)num2 = -num2;

     int limit, hcf=1;
     limit = num1;
     if(num2 < limit) limit = num2;

     int count;
     for(count = limit; count >= 1; count--)
     {
         if(num1 % count == 0 && num2 % count == 0)
         {
             hcf = count;
             break;
         }
     }
     return hcf;
 }
