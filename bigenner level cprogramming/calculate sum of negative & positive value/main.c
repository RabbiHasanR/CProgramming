#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,array[20],positive_value=0,nagetive_value=0;
    float avg,total=0,num;
    printf("Enter number:");
    scanf("%f",&num);
    printf("\nTake input number:");
    for(i=0;i<num;i++)
        scanf("%d",&array[i]);
    for(i=0;i<num;i++)
        printf("Input number:%d\n",array[i]);
        for(i=0;i<num;i++)
        {
            if(array[i]<0)
            nagetive_value+=array[i];
            else if(array[i]>0)
                positive_value+=array[i];
            else if(array[i]==0)
                ;
            else
                printf("taski");

                total+=array[i];
        }
        printf("total:%f",total);
        avg=total/num;
        printf("\nsum of nagetive value:%d",nagetive_value);
        printf("\nsum of positive value:%d",positive_value);
        printf("\navarage:%f",avg);

    return 0;
}
