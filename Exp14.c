// Experiment 14: Input the data by user and Select the list of the data entered by the found in linked list.
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;  
            };

struct node *start = NULL;

void createList (void);
int searchList (int);

void main (void)
          {
           int d,sl;
           createList();
           printf("\nEnter Data Which is to be Searched :- ");
           scanf("%d",&d);
           searchList(d);
          }      

void createList (void)
                {
                 int x,i;
                 printf("\nEnter Number of List You Want to Create :- ");
                 scanf("%d",&x);
                 for(i=1; i <= x; i++) 
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
                 printf("\nLink Created Successfully %d Node Added",x);
                }

int searchList (int d)
               {
                struct node *p;
                int i,count = 0;
                p = start;
                for(i=1; p != NULL; i++,p = p->link)
                   {
                    if(p->data == d) 
                      {
                       count = 1; 
                       break;   
                      }  
                   }
                 if(count == 1)
                   {
                    printf("\n%d Found in the %d Node of the List",d,i);
                   }
                 else
                    {
                     printf("\n%d is Not Exist in the List",d);   
                    }      
               }     