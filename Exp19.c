// Experiment : Insert a New Node at the Begin of the Doubly Linked-List
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *prev,*next;
            };

struct node *start = NULL;

void createList (void);
void insertAtBegin (void);
void display (void);

void main (void)
          {
           createList();
           display(); 
           insertAtBegin();
           display(); 
          }  

void createList (void)
                {
                 struct node *temp,*p;
                 int i,num;
                 printf("\nEnter Number of List You Want to Create :- ");
                 scanf("%d",&num);
                 for(i=1; i<=num; i++)
                    {
                     temp = (struct node *) malloc (sizeof(struct node));
                     printf("\nEnter %d Node Data :- ",i);
                     scanf("%d",&temp->data);   
                     temp->prev = NULL;
                     temp->next = NULL;
                     if(start == NULL)
                       {
                        start = temp;
                       } 
                     else   
                        {
                         p = start;
                         while(p->next != NULL)
                              {
                               p = p->next; 
                              }     
                         p->next = temp;
                         temp -> prev = p;    
                        }  
                    }   
                 printf("\n%d Nodes Created",num);
                }

void display (void)
             {
              struct node *p;
              p = start;
              printf("Your Nodes Data Are :- ");
              while(p != NULL)
                   {
                    printf("%d ",p->data);
                    p = p->next;
                   }   
             }   

void insertAtBegin (void)
                   {
                    struct node *temp;
                    temp = (struct node *) malloc (sizeof(struct node));
                    printf("\nEnter First Node Data :- ");
                    scanf("%d",&temp->data);
                    temp->next = start;
                    temp->prev = NULL;
                    start->prev = temp;
                    start = temp;
                    printf("\nNode Inserted At Begin Successfully");
                   } 