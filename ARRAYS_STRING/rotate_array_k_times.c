#include<stdio.h>
#define N 10
int main()
{
  printf("enter the no : ");
  int num[N],count = 0;
  while(count < N)
  {
      scanf("%d",&num[count]);
      if(num[count] == 0) break;
      count++;
  }
  int k;
  printf("enter the no to shift number by k times : ");
  scanf("%d",&k);
  int store = count;
  int i,rotate[N]={0};
  for(i = (k-1); i >= 0; i--)
  {

      rotate[i] = num[store-1];
      store--;
  }

  for(i=0;i<count-k;i++)
  {
      rotate[i+k]=num[i];
  }

  for(i=0;i<count;i++)
  {
      printf("%d ",rotate[i]);
  }

 return 0;
}
