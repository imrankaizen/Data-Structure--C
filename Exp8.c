// Experiment 8: Declare a structure having an int and self type pointer variable to hold the address, 
// declare its 3 pointers to input values on its members and access the members using Addresses holds.
#include<stdio.h>
#include<stdlib.h>
struct node {
             int data;
             struct node *nextAdd;
            };
void main()
        {
         struct node *p1,*p2,*p3;
         p1 = (struct node *) malloc (sizeof(struct node));
         p2 = (struct node *) malloc (sizeof(struct node));
         p3 = (struct node *) malloc (sizeof(struct node));
         printf("\nEnter First Node Data :- ");
         scanf("%d",&p1->data);
         p1->nextAdd = p2;
         printf("\nEnter Second Node Data :- ");
         scanf("%d",&p2->data);
         p2->nextAdd = p3;
         printf("\nEnter Third Node Data :- ");
         scanf("%d",&p3->data);
         p3->nextAdd = NULL;
         printf("\nFirst Node Data is %d",p1->data);
         printf("\nSecond Node Data is %d",p2->data);
         printf("\nThird Node Data is %d\n",p3->data);  
         free(p1);       
         free(p2);
         free(p3);
        }