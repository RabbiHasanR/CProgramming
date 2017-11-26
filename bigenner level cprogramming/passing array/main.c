#include <stdio.h>
#include <stdlib.h>n
#include <math.h>
void func(int arr[],int val);


int main()
{
    int array[5]={2,3,4,5,6};
    int power;
    printf("enter power value:\n");
    scanf("%d",&power);
    func(array,power);
    return 0;
}
void func(int arr[],int val)
{
    int i;
    for(i=0;i<5;i++)
        printf("value%d:%f\n",(i+1),pow(arr[i],val));
}
