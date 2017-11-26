
#include <stdio.h>
#include <malloc.h>
struct node{
    int value;
    struct node *next;
	};*head = NULL;

struct node *current, *new_node;

void insert_last(){
	new_node=(struct node*)malloc(sizeof(struct node));

	if(new_node==NULL){
		printf("Failed to insert");
    }
	printf("Please Enter the Data:\n");
	scanf("%d",&new_node->value);
	new_node->next=NULL;

if(head==NULL){
	current=new_node;
    head=new_node;
    }

else{
	while(current->next!=NULL){
	current=current->next;
    }

	current->next=new_node;
}

}
void display(){
    printf("Data %d\n",new_node->value);
    printf("Address %d\n",new_node);
    printf("Next Address %d\n",new_node->next);

}
int main(){
    int i;
    for(i=0;i<9;i++){
        insert_last();
        display();
	}
	return 0;
}

