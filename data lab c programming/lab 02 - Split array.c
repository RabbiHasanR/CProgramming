#include <stdio.h>
int main(){
	int mainarray[100],count,data,array1[100],array2[100],k=-1,n=-1,j=-1;
	
	//take data into array
	printf("Enter Numbers: \n");
	for(;;){
		scanf("%d", &data);	
		if (data == -846)
		break;
		else{
		k++;
		mainarray[k] = data;
		}
	}
	
	//show data from array
	printf("Inputted Numbers Are: \n");
	for(count=0;count<=k;count++){
		printf("%d\n",mainarray[count]);		
	}
		
	//split data as even and odd into 2 array
	
	for(count=0;count<=k;count++){
		
		if(mainarray[count]%2==0){
		j++;
		array1[j] = mainarray[count];
		}
		else {
			n++;
			array2[n] = mainarray[count];			
		}	
	}
	
	//show data from arra 1
	
	printf("Even Numbers Are: \n");
	for(count = 0; count <= j; count++){
		printf("%d\n",array1[count]);
	}
	
	//show data from array 2	
	printf("Odd Numbers are: \n");	
	for(count=0; count <= n; count++){
		printf("%d\n",array2[count]);
	}

}
