#include <stdio.h>
int my_function(int *num);
int main()
{
 int array[]={1,2,3,4,5,6,7},i;
 for( i=0;i<7;i++)
 {
     my_function(&array[i]);
 }
 return 0;
}

int my_function(int *num)
{
   printf("%d",*num);

}
