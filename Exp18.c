// Experiment 18 : Insert a Linked-List in the Middle of a Doubly Linked-List
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *prev,*next;
            };

struct node *start = NULL;

int createList (void);
void insertInMiddle (int);
void display (void);

void main (void)
          {
           int num; 
           num = createList();
           display(); 
           if(num%2 != 0)
             {
              printf("\nList Already Contain Node in Middle Position");
              return;
             }  
           insertInMiddle(num);
           display(); 
          }  

int createList (void)
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
                 return num;
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

void insertInMiddle (int x)
                    {
                     struct node *p,*temp,*q;
                     int i;
                     temp = (struct node *) malloc (sizeof(struct node));
                     printf("\nEnter Node Data :- ");
                     scanf("%d",&temp->data);
                     temp->next = NULL;
                     temp->prev = NULL;
                     p = start; 
                     for(i=1; i<x/2; i++)
                        {
                         p = p->next;
                        }   
                     q = p->next;
                     temp->next = p->next;
                     temp->prev = q->prev;
                     p->next = q->prev = temp;
                     printf("\nNode Inserted Successsfully in Middle Position");
                    }