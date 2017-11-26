#include <stdio.h>
#include <malloc.h>

//declare a structure for node, value & address
struct node{
    int value;
    struct node *next;
	};
	*head = NULL;
struct node *current, *new_node;

void insert_last(){			//insertion function
	new_node=(struct node*)malloc(sizeof(struct node)); //memory allocation
	
	if(new_node==NULL){
		printf("Failed to insert");
    }
    
    //take value for new node
    
	printf("Please Enter the Data:\n");
	scanf("%d",&new_node->value);
	new_node->next=NULL;
	
    
if(head==NULL){					//when no node on the list, make first one head
        head=new_node;
        current=new_node;
        current->next=NULL;
    }
    
						//When node present, no need to make it head
    else{
        new_node->next=head;
        head=new_node;
    }


}

//function for displaying node and their address, value, data
void display(){
    struct node *temp;
    temp=head;
    printf("\n Data %d",temp->value);
    printf("\n Address %d",temp);
    printf("\n Next Address %d\n",temp->next);
    
}
main(){
    int i;
    for(i=0;i<9;i++){		//loop for 9 node
        insert_last();		//call these funtion 9 time to insert 9 node
        display();
	}
}

