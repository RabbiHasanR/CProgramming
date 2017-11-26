#include <stdio.h>
int main(){
    int t[846], i, j, k=0,even[846],e=0,odd[846],o=0,d[846],y=-1,x=-1;
    
    
    printf("Enter Value\n");

    for (;;){  			//infine loop
    scanf("%d",&j);		//take data into array t
    if (j==00)
        break ;
    else {

    t[k] = j;
    k++;
    }
        }
        
        //show all inputted data from the array with their possition 
        
    printf("Show The Results:\n");
    for (i=0;i<k;i++){
        printf("position %d:",i);
        printf("%8d\n", t[i]);
    }
		//split the array by even and odd into two array
		
    for(i=0;i<k;i++){
            if(t[i]%2==0){
                even[e]=t[i];
                e++;
            }
        else {
            odd[o]=t[i];
            o++;
        }
    }
    
    //show even number from array even

    printf("Even Numbers are:\n");
    for(i=0;i<e;i++){
        printf("%d\n", even[i]);
    }


	//show data from array odd 
	
    printf("Odd Numbers are:\n");
    for(i=0;i<o;i++){
        printf("%d\n", odd[i]);
    }
	
	//merge odd and even array into one again
	
    printf("Merged Data:\n");
    for(i=0;i<e+o;i++){
        if (i<e){
            y++;
            d[y]=even[i];
        }
        else {
            x++;
            y++;
            d[y]=odd[x];
        }
    }
	
	//show data from merged array
	
    for(i=0;i<e+o;i++){
    printf("%d", d[i]);
    }
}
