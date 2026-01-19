#include<stdio.h>

int main()
{
   printf("Enter the numbers : ");
   int num1,num2,num3;
   scanf("%d %d %d",&num1,&num2,&num3);

   int newnum,count,hcf=1;

     if(num1 ==0 || num2 == 0 || num3 == 0)
        {
            return 0;
        }
        newnum = num1;
        if(num2 < newnum)     newnum =num2;
        if(num3 < newnum)     newnum =num3;

     for(count = newnum; count >= 1; count--)
     {
           if(num1 % count == 0 && num2 % count == 0 && num3 % count == 0)
           {
               hcf=count;
               break;
           }
     }

   printf("HCF : %d\n",hcf);

    return 0;
}


