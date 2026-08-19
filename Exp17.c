// Experiment 17: Create a Doubly Linked - List 
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *prev,*next;
            };

struct node *start = NULL;

void createList (void);
void display (void);

void main (void)
          {
           createList();
           display(); 
          }      

void createList (void)
                {
                 struct node *temp,*p;
                 int num,i;
                 printf("\nEnter Number of List You Want to Craete :- ");
                 scanf("%d",&num);
                 for(i=1; i<=num; i++)
                    {
                     temp = (struct node *) malloc (sizeof(struct node));
                     printf("\nEnter %d Node Data :- ",i);
                     scanf("%d",&temp->data);
                     temp->next = NULL;
                     temp->prev = NULL;
                     if(start == NULL)
                       {
                        start = temp;
                       } 
                     else
                        {
                         p =  start;
                         while(p->next != NULL)
                              {
                               p = p->next; 
                              }     
                         p->next = temp;
                         temp->prev = p;     
                        }  
                    }
                 printf("\n%d Node Created Successfully",num);   
                }

void display (void)
             {
              struct node *p;
              p = start;
              printf("\nYour List Data Are :- ");
              while(p != NULL)
                   {
                    printf("%d ",p->data);
                    p = p->next;
                   } 
             }       