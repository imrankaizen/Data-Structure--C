// Experiment 12: Display the values of a linked list using display function.
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;   
            };

struct node *start = NULL;

void Display (void);

void main (void)
           {
            Display();
           }
           
void Display (void)
             {
              struct node *p;
              if(start == NULL)
                {
                 printf("\nList is Empty");   
                 return;   
                }
              p = start;
              printf("\nYour List Nodes Data are :- ");
              while(p != NULL)
                   {
                    printf("%d ",p->data);
                    p = p->link;
                   }       
             }          