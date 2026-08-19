// Experiment 15: Delete the middle node of the linked list.
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;
            };

struct node *start = NULL;

int createList (void);
void deleteMiddle (int);
void display (void)
             {
              struct node *p;
              p = start;
              if(start == NULL)
                {
                 printf("\nThere is No Nodes Present in the List");
                 return; 
                } 
              printf("\nYour Nodes Data are :- ");
              while(p != NULL) 
                    {
                     printf("%d ",p->data);
                     p = p->link;
                    } 
              printf("\n");      
             } 



void main (void)
          {
           int x;
           x = createList();
           display();
           if(x%2 != 0) 
             {
              deleteMiddle(x);  
             } 
           else
              {
               printf("\nList has no Middle Position"); 
              } 
           display();
          }

int createList (void)
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
           return x; 
          } 

void deleteMiddle (int x)
                  {
                   int i; 
                   struct node *p,*q;
                   p = start;
                   for(i=1; i<(x/2); i++)
                      {
                       p = p->link; 
                      }
                   q = p->link;
                   p->link = q->link;
                   free(q);
                   printf("\nMiddle Node Deleted Successfully");          
                  }  