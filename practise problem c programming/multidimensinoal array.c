
#include <stdio.h>
int main(){
   float a[2][2], b[2][2], c[2][2];
   int i,j;
   printf("Enter the elements of 1st matrix\n");
/* Reading two dimensional Array with the help of two for loop. If there was an array of 'n' dimension, 'n' numbers of loops are needed for inserting data to array.*/
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       printf("Enter a%d%d: ",i+1,j+1);
       scanf("%f",&a[i][j]);
       }
   printf("Enter the elements of 2nd matrix\n");
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       printf("Enter b%d%d: ",i+1,j+1);
       scanf("%f",&b[i][j]);
       }
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
/* Writing the elements of multidimensional array using loop. */
       c[i][j]=a[i][j]+b[i][j];  /* Sum of corresponding elements of two arrays. */
       }
   printf("\nSum Of Matrix:");
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       printf("%.1f\t",c[i][j]);
           if(j==1)             /* To display matrix sum in order. */
              printf("\n");
      }
return 0;
}
