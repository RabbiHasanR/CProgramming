#include <stdio.h>

int sum_of_arry(int array[],int size);

int main()
{
    int a[10],i,sum;
    printf("enter array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sum=sum_of_arry(a,10);
    printf("total sum:%d",sum);
    return 0;
}
int sum_of_arry(int array[],int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+=array[i];

    }
    return sum;
}
