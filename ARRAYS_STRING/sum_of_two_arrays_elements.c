#include<stdio.h>
#define N 50
int main()
{
    printf("enter no 1 list (max no : 50,0 to exit) : ");
    int num1[N],count1 = 0;
    while(count1 < N)
    {
        scanf("%d",&num1[count1]);
        if(num1[count1] == 0) break;
        count1++;
    }
     printf("enter no 2 list (max no : 50,0 to exit): ");
     int num2[N],count2 = 0;
    while(count2 < N)
    {
        scanf("%d",&num2[count2]);
        if(num2[count2] == 0) break;
        count2++;
    }
    if(count1 != count2)
    {
        printf("unmatched count");
        break;
    }
    int sum[N],i;
    for(i = 0; i < count1; i++)
    {
        sum[i] = num1[i] + num2[i];
    }
    for(i=0; i < count1; i++)
    {
        printf("sum of numbers : %d ",sum[i]);
    }
    return 0;
}
