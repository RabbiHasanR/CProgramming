#include <stdio.h>
int main(){
    int a[100],m,k=0,i,n,first,last,mid;
    
    for (;;){ 					//infinite loop to take data again and again
    
        printf("Please Enter the integer\n");
        scanf("%d",&a[k]);
        k++;
        printf("Please enter -99 to break\n");
        scanf("%d",&m);
        if(m==-99)
            break;
    }
	
	//show the data
    for(i=0;i<k;i++){
        printf("%d\n",a[i]);
    }



 printf("Please enter the search value\n");
        scanf("%d",&n);
        first=0;
        last=k-1;
        mid=(first+last)/2;

    for(i=0;i<k;i++){
    if(first<last){
        if (a[mid]==n){
            printf("Value Found\n");
            break;
        }
        else if (a[mid]>n){
            last=mid-1;
            mid=(first+last)/2;
        }
        else {
            first=mid+1;
            mid=(first+last)/2;
        }
    }
    else
        printf("Value not found\n");
}
}
