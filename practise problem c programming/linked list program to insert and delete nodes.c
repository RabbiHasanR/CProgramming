
#include<stdio.h>
#include<stdlib.h>
void  insert();
void  display();
void  deletion();

struct node
{
  int data;
  struct node *next;
}*first=NULL;

void  insert()
{
struct node *temp;
struct node *nn=(struct  node*)malloc(sizeof(struct node));
  printf("enter  the data\n");
  scanf("%d",&nn->data);
  temp=first;
  while(temp->next!=first)
    temp=temp->next;
  temp->next=nn;
  nn->next=NULL;
}

void  display()
{
  struct node *temp;
  temp=first;
  if(temp==NULL)
  {
    printf("no elements\n");
    return;
  }
  printf("elements in linked list are\n");
  while(temp!=NULL)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}

void  deletion()
{
  struct  node  *temp;
  temp=first;
  first=first->next;
  temp->next=NULL;
  free(temp);
}

int  main()
{
  int  op;
  do
  {
    printf("1.insertion\n2.deletion\n3.display\n4.exi\n");
    printf("enter option\n");
    scanf("%d",&op);
    switch(op)
    {
      case 1:insert();
             break;
      case 2:deletion();
             break;
      case 3:display();
             break;
    }
  }while(op!=6);

  return 0;
}
