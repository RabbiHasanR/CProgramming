#include <stdio.h>
int main(){
	int array1[100],count,number,n=-1,array2[100],number2,m=-1;
	printf("Enter the data of first array\n");
	
	//take data into array
	for(;;){
		scanf("%d",&number);		
		if (number == -846)
		break;
		else{
		n++;
		array1[n]= number;
		}
	}	
	
	//show data from the array
	
	for(count=0;count<=n;count++){
		printf("%d\n",array1[count]);		
	}
	
	//take data into 2nd array
	
	printf("Enter the data of 2nd array\n");
	for(;;){
		scanf("%d",&number2);		
		if (number2==-846)
		break;
		else{
		m++;
		array2[m]= number2;
		}
	}	
	
	//show data from 2nd array
	for(count=0;count<=m;count++){
		printf("%d\n",array2[count]);	
	}
}
