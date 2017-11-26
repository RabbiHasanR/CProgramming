#include <stdio.h>
int main()
{
    int a[5],i,b;


    for(i=0;i<5;i+=1)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);

    }
    printf("Enter the number to be searched:");
    scanf("%d",&b);
    for(i=0;i<5;i++){
        if(a[i]==b){
                printf("The number %d appears in the first %d numbers.",b,i+1);
                break;

        }


    }
    if(i==5)
        printf("The number %d is not appears in the first 5 numbers.",b);
    return 0;

    }







