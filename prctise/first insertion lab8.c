#include <stdio.h>
#include <malloc.h>
struct node
{
  int value;
  struct node *next;
};
*head=NULL;
struct node *current,*new_node;

void insert_last()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    if(new_node==NULL)
        printf("failled to open");

    printf("\nenter the data:\n");
    scanf("%d",&new_node->value);
    new_node->next=NULL;

    if(head==NULL)
    {
       current=new_node;
       head=new_node;
    }
    else
    {
      while(current->next!=NULL)
      {
        current=current->next;
      }
      current->next=new_node;
    }

}
void display()
{
    struct node *temp;
    temp=head;
    printf("\nadrress:%d",new_node->value);
    printf("\ndata:%d",new_node);
    printf("\nnext address:%d",new_node->next);
}
int main()
{
    int i;
    for(i=0;i<9;i++)
    {
        insert_last();
        display();
    }
    return ;
}
