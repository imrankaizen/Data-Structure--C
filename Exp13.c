// Experiment 13: Select the last list from the list.
#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;   
            };

struct node *start = NULL;

void selectLastNode (void);

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

void main()
         {
          createList();
          display();
          selectLastNode(); 
          display(); 
         } 
         
void selectLastNode (void)
                    {
                     struct node *p,*q;
                     if(start == NULL)
                       {
                        printf("\nThere is no Node Presesnt in the List");
                        return;
                       }       
                     p = start;
                     while(p->link->link != NULL)
                          {
                           p = p->link; 
                          } 
                     q = p->link; 
                     p->link = NULL;     
                     printf("\nYour Last Node Data is %d ",q->data);  
                     free(q);   
                    }