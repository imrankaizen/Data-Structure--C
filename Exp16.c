// Experiment 16: Display the Linked - List in Reversed Order

#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link; 
            };

struct node *start = NULL;

void createList (void);
void display (void);
void reverse (void);

void main (void)
          {
           createList();
           display();
           reverse();
           display(); 
          }  

void createList (void)
                {
                 struct node *temp,*p;
                 int x,i;
                 printf("\nEnter Number of List You Want to Create :- ");   
                 scanf("%d",&x);
                 for(i=1; i<=x; i++)
                    {
                     temp = (struct node *) malloc (sizeof(struct node));
                     printf("\nEnter %d Node Data :- ",i);
                     scanf("%d",&temp->data);
                     temp->link = NULL;
                     if(start == NULL)
                       {
                        start = temp;
                       } 
                     else   
                        {
                         p = start;
                         while(p->link != NULL)
                              {
                               p = p->link; 
                              }
                          p->link = temp;          
                        }  
                    }
                 printf("\nList Created Successfully %d Nodes Added",x);
                }
            
void display (void)
             {
              struct node *p;
              p = start;
              printf("\nYour List Data Are :- ");
              while(p != NULL)
                   {
                    printf("%d ",p->data);
                    p = p->link;
                   }   
             }  
             
void reverse (void)
             {
              struct node *p,*q,*r;
              p = NULL; 
              q = start;
              while(q != NULL)
                   {
                    r = q->link;   
                    q->link = p;
                    p = q;
                    q = r;
                   } 
              start = p;     
             }   