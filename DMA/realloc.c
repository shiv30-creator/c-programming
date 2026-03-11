#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the size of the number : ");
    int size;
    scanf("%d",&size);
    int *num;
    num = calloc(size,sizeof(int));
    if(num == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter %d numbers : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",num[i]);
    }
    printf("enter how many more numbers : ");
    int more;
    scanf("%d",&more);

   num = realloc(num,(size+more)* sizeof(int));
   printf("enter additional numbers : ");
 for(int i=size;i<(size+more);i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0;i<(size+more);i++)
    {
        printf("%d\n",num[i]);
    }
    free(num);
    return 0;
}
