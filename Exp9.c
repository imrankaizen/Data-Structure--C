// Experiment 9: Write a first programme in linked list to create lists
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;
            }*start = NULL;

void createList(void);
void display (void);

void main (void)
          {
           createList(); 
           display();
          }        

void createList (void)
          {
           int i,x;
           printf("\nEnter Number of List You Want to Create :- ");
           scanf("%d",&x);
           for(i=1; i<=x; i++)
              {
               struct node *temp,*p; 
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
            printf("\nList Created Successfully %d Nodes Added\n",x);  
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
          
  