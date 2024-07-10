#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
   struct node *prev;
};
struct node *head;

void insertfirst()
{
    struct node *temp,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("\nEnter element to be inserted: ");
    scanf("%d",&newnode->data);
    if(head == NULL)
    {
        head = newnode;
        return ;
    } 
    else 
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertend()
{
    struct node *temp,*newnode;
    temp = head;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("\nEnter element to be inserted: ");
    scanf("%d",&newnode->data);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newnode;
      newnode->prev = temp;
    }
}

int calcSize()
{
  int size = 0;
  struct node *temp;
  temp = head;
  while (temp != NULL)
    {
      temp = temp->next;
      size++;
    }
  return size;
}

void insertposition()
{
   struct node *temp,*newnode;
   temp = head;
   int size = calcSize();
   int pos;
   printf("\nEnter position at which element you want to insert: ");
   scanf("%d",&pos);
   if (pos < 1 || size < pos)
    {
      printf ("\nCan't insert, %d is not a valid position\n", pos);
      return;
    }

    else if(pos == 1)
    {
      insertfirst();
    }

    else if(head == NULL)
    {
        head = newnode;
        return;
    }

    else
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("\nEnter element to be inserted: ");
        scanf("%d",&newnode->data);
        int i=1;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    printf("\nDOUBLY LINKED LIST: \n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main ()  
{  
    int choice=0;     
    printf("\n----------------DOUBLY LINKED LIST OPERATIONS-----------------\n");
    while(choice != 5)  
    {  
        printf("\n\nPRESS 1 FOR INSERTION AT START:\nPRESS 2 FOR INSERTION AT Nth POSITION:\nPRESS 3 FOR INSERTION AT LAST:\nPRESS 4 FOR DISPLAY:\nPRESS 5 FOR EXIT:");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                insertfirst();  
                break;  
            }  
            case 2:  
            {  
                insertposition();  
                break;  
            }  
            case 3:  
            {  
                insertend();  
                break;  
            }  
            case 4:
            {
                display();
                break;
            }
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}  