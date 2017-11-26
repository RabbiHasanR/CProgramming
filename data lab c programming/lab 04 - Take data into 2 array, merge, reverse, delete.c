#include<stdio.h>
int main(){
    int a[100],b[100],c[100],d[100],f[100],loc,m,n=-1,p,q=-1,i,j=-1,k=-1,y=-1,x=-1;
    
    //take data into first array
    
    printf(" Enter the value of 1st array\n\n");
    for(;;)
    {
        scanf(" %d",&m);
        if (m==-99)
            break;
        else
            n++;
        a[n]=m;
    }
    
    //take data into second array
    
    printf(" Enter the value of 2nd array\n\n");
    for(;;)
    {
	        scanf(" %d",&p);

        if (p==-99)

            break;

        else

            q++;

        b[q]=p;

    }

	//show all data from array 1
	
    printf(" Value of 1st array:\n\n");

    for(i=0;i<=n;i++){

        printf(" a[%d]=%d\n",i,a[i]);

    }

	//show data from array 2
	
    printf(" Value of 2nd array:\n\n");

    for(i=0;i<=q;i++){

        printf(" b[%d]=%d\n",i,b[i]);

    }

	//merge array 1 & 2
	
    for (i=0;i<=n+q+1;i++){
        if(i<=n){
            y++;
            c[y]=a[i];
        }

        else{
            x++;
            y++;
            c[y]=b[x];
        }
    }


	//show data from merged array
	
    printf(" Merged value\n\n");

    for(i=0;i<=n+q+1;i++){

        printf(" a[%d]=%d\n",i,c[i]);

    }
    
    //Split the merged array again by even and odd

    for(i=0;i<=n+q;i++){

        if(c[i]%2==0){
            j++;
            d[j]=c[i];

        }

        else{
            k++;
            f[k]=c[i];
            }

    }


	//show data from array of even
	
    printf(" Even value\n\n");

    for(i=0;i<=j;i++){
        printf(" d[%d]=%d\n",i,d[i]);
    }


	//show data from array of odd
    printf(" Odd Value\n\n");

    for(i=0;i<=k;i++){

        printf(" f[%d]=%d\n",i,f[i]);

    }
	
	//print data from array 1 by decendeing order, largeest indexing number first.
	//such as array[10] first then array[9]....array[0]
	
    printf(" Reverse of 1st arry\n\n");

    for(i=n;i>=0;i--){
     printf(" a[%d]=%d\n",i,a[i]);

    }


   //Read the location
   printf(" Location of the element to be deleted: ");
   scanf("%d", &loc);
 
   /* loop for the deletion  */
   while (loc <= n) {
      a[loc - 1] = a[loc];
      loc++;
   }
   n--;  // No of elements reduced by 1 as you have deleted 1 element
 
   //Print Array after deletion
   for(i=0;i<=n;i++){
      printf(" a[%d]=%d\n",i,a[i]);
  }

return 0;

}
