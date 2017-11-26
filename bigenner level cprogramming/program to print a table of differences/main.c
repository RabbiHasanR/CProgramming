#include <stdio.h>
#include <math.h>
#define MAX_ITEM 8  /*maximum number of items of data*/

int main()
{


double x[MAX_ITEM],mean,st_dev,sum,sum_sqr;
int i;

printf("enter %d number separated by blanks or<return>s\n",MAX_ITEM);
/*get the data*/
for(i=0;i<MAX_ITEM;i++){
    scanf("%lf",&x[i]);
}
/*computes the sum and the sum of the squares of all data*/
sum=0;
sum_sqr=0;
for(i=0;i<MAX_ITEM;i++)
{
    sum+= x[i];
    sum_sqr+= (x[i] * x[i]);
    printf("%.2lf\n",sum_sqr);
}
/*computes and prints the mean and deviation*/
mean=sum/MAX_ITEM;
st_dev=sqrt((sum_sqr / MAX_ITEM) - (mean * mean));

printf("The mean is %.2lf\n",mean);
printf("The standard deviation is %.2lf\n",st_dev);

/*display the difference between each item and the mean*/

printf("\nTable of differences between data values and mean\n");
printf("Index     Table     Difference\n");
for(i=0;i<MAX_ITEM;i++)
printf("%d\t%.2lf\t%.2lf\n",i,x[i],x[i] - mean);

return 0;

}


