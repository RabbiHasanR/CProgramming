#include <stdio.h>
int main(){
	int i=0,p=0,array[100],searchvalue,n;

	for(;;){			//infinte loop to to the hole process again & again
		for(;;){
			printf("Enter Some integer Number:\n");
			scanf("%d",&array[p]);
			p++;
			printf("Enter -99 to break:\n");
			scanf("%d",&n);
			if(n==-99)
			break;
		}
	printf("Your given Numbers Are:\n");
	for(i=0;i<p;i++)
		printf("%d\n",array[i]);


}
for(;;){		//infinite loop to search value again & again
		printf("Enter the search value:\n");
		scanf("%d",&searchvalue);
		for(i=0;i<p;i++){
			if(array[i]==searchvalue){
			printf("%d is found at Location %d\n",searchvalue,i+1);
			break;
			}
			if(i==p){
			printf("You Given Number is not present in the dataset\n");
			}
			printf("Enter -99 to break:\n");
	scanf("%d",&n);
	if(n==-99)
	break;
		}
			printf("Enter -99 to break:\n");
			scanf("%d",&n);
			if(n==-99)
			break;
	}

	return 0;
}
