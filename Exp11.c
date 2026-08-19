// Experiment 11: Insert new list in a created List at the position given by the user.
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;   
            };

struct node *start = NULL;

void insertAtPosition (void);

void main (void)
          {
           insertAtPosition(); 
          }  

void insertAtPosition (void)
                      {
                       int i,position;
                       struct node *temp,*p; 
                       if(start == NULL)
                         {
                          printf("\nNo Nodes Present in the List\n");
                          return;  
                         }
                       printf("\nEnter Your Position :- ");
                       scanf("%d",&position);  
                       if(position < 1)
                         {
                          printf("\nInvalid Input\n"); 
                          return; 
                         }   
                       temp = (struct node *) malloc (sizeof(struct node));
                       printf("\nEnter Your Node Data :- ");
                       scanf("%d",&temp->data);
                       temp->link = NULL;
                       p = start;
                       if(position == 1)
                          {
                           temp->link = p;
                           start = temp; 
                           printf("\nNode Added At First Position");
                          }
                       else
                          {
                           for(i=1; i<position-1 && p != NULL; i++)
                              {
                               p = p->link;
                              } 
                           if(p == NULL)
                             {
                              printf("\nPosition is Out of the Bound");  
                             }
                           else
                              {          
                               temp->link = p->link;
                               p->link = temp;
                               printf("\nNode Added Successfully At %d Position",position);                  
                              } 
                          } 
                      }  