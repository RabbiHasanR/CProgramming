//Stack
#include<stdio.h>
int main(){
	int input[100],top=-1,option,maximum=5,invalue,i;

	for(;;){

	printf("\n 1 Insertion\n 2 Delete\n 3 Display\n 4 Exit\nChoose Your Option\n");
	scanf("%d",&option)	;

	if(option==1){					//Insertion
		if(top==maximum){
			printf("Stack Overflow\n");
		}
		else {
			top=top+1;
			printf("Ensert Value\n");
			scanf("%d",&invalue);
			input[top]=invalue;
		}
	}
	else if(option==2){					//Deletion
		if(top==-1)
			printf("Stack Underflow\n");

		else
			top=top-1;

	}

	else if(option==3){
		printf("Display The Value\n");
		for(i=0;i<=top;i++){
			printf("%d\n",input[i]);
		}
	}
	else if(option==4){
		exit(0);
	}
	else {
		printf("There is a Problem\n");
	}
}
return 0;
}
