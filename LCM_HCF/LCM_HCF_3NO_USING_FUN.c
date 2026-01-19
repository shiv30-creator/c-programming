#include<stdio.h>
int HCF(int num1, int num2);
int LCM(int num1,int num2);

 int main()
 {
     printf("Enter 3 numbers : ");
     int num1,num2,num3;
     scanf("%d %d %d",&num1,&num2,&num3);
     int hcf,hcf3,lcm3;
     hcf12 = HCF(num1,num2);
     hcf3 = HCF(num3,hcf);
     printf(" HCF : %d\n",hcf3);
     int lcm;
     lcm12 = LCM(num1,num2);
     lcm3 = LCM(lcm,num3);
     printf(" LCM : %d",lcm3);

     return 0;
 }

 int HCF(int num1, int num2)
 {
     if(num1 == 0 || num2 == 0 )return 0;
     if(num1 < 0)num1 = -num1;
     if(num2 < 0)num2 = -num2;

     int limit,hcf=1;
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

 int LCM(int num1,int num2)
 {
     int lcm,hcf;
     hcf = HCF(num1,num2);
     if(hcf == 0)return 0;
     lcm = (num1 * num2)/hcf;
     return lcm;
 }
