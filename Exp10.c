// Experiment 10: Insert new list in a created List at end of the List
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;
            };
        
struct node *start = NULL;

void insertAtEnd (void);

void main (void)
          {
           insertAtEnd(); 
          }      

void insertAtEnd (void)
                   {
                    struct node *temp,*p;
                    temp = (struct node *) malloc (sizeof(struct node));
                    printf("\nEnter Your Node Data :- ");
                    scanf("%d",&temp->data);
                    temp->link =  NULL;
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
                    printf("\nNode Added Successfully At End");
                   }