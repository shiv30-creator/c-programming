#include<stdio.h>
#define N 10
int main()
{
   printf("Enter the numbers [no.count < 10 and enter 0 to stop count]: ");
   int num[N],count = 0;
   while(count < N)
   {
       scanf("%d",&num[count]);
       if(num[count] == 0) break;
       count++;
   }
   int add_no;
   printf("Enter the number to be added : ");
   scanf("%d",&add_no);

   int i,check_even[N];
   for(i = 0; i < count; i++)
   {
       if(num[i] % 2 == 0)
       {
           check_even[i] = num[i] + add_no;
       }
       else
       check_even[i] = num[i];
   }
   printf("The numbers as input  : ");
   for(i = 0; i < count; i++)
   {
       printf("%d ",num[i]);
   }
   printf("\n The numbers after addition  of %d in even no : ",add_no);
   for(i = 0; i < count; i++)
   {
       printf("%d ",check_even[i]);
   }
 return 0;
}
