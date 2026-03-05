#include<stdio.h>
#define N 20
int main()
{
    int num[N],count = 0;
    while(count < N)
    {
        scanf("%d",&num[count]);
        if(num[count] == 0)break;
        count++;
    }
    int i,j,temp;
    for(i = 0;i < count-1; i++)
    {
        for(j = i+1; j < count; j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        printf(" %d ",num[i]);
    }
    return 0;
}
