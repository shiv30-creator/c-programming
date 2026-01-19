#include<stdio.h>

int main()
{
   printf("Enter the numbers : ");
   int num1,num2;
   scanf("%d %d",&num1,&num2);

   int newnum,count,hcf=1;

     if(num1 ==0 || num2 == 0)
        {
            return 0;
        }
     if(num1 < num2) newnum = num1;
     else newnum = num2;

     for(count = newnum;count >= 1;count--)
     {
           if(num1%count == 0 && num2%count == 0)
           {
               hcf=count;
               break;
           }
     }

   printf("HCF : %d\n",hcf);
   int lcm;
   lcm = (num1*num2)/hcf;
   printf("LCM : %d",lcm);

    return 0;
}


