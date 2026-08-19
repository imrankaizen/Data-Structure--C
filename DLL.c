// Add at Begining , Add at After , Add at End , Select First NODE , Select Last Node , Select
// NODE With Data , Display , Length , Reverse List , Swap Two NODE , Sort Element , Create List

#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *prev,*next;   
            };

struct node *start = NULL;

void addAtBegin (void);
void addAtEnd (void);
void addAtAfter (void);
int length (void);
void display (void);
void selectAtBegin (void);
void selectAtEnd (void);
void selectWithData (void); 
void swap (void);
void createList(void);

void main (void)
          {
           int choice;
           do
            {
             printf("\nPress '0' to Quit\n");
             printf("\nPress '1' to Add a Node At Begin");
             printf("\nPress '2' to Add a Node At End");
             printf("\nPress '3' to Add a Node At After");
             printf("\nPress '4' to Find Length of lists");
             printf("\nPress '5' to Display All Nodes Data");
             printf("\nPress '6' to Select a Node At Begin");
             printf("\nPress '7' to Select a Node At End");
             printf("\nPress '8' to Select a Node With Data");   
             printf("\nPress '9' to Swap Nodes");
             printf("\nPress '10' to Create List");         
                    
             printf("\nEnter Your Choice :- ");
             scanf("%d",&choice);
             
             switch(choice)
                    {
                     case 0 : printf("\nProgram Completed Successfully\n"); break;
                     case 1 : (start != NULL) ? addAtBegin() : printf("\nList is Empty\n"); break;
                     case 2 : (start != NULL) ? addAtEnd() : printf("\nList is Empty\n"); break;                     
                     case 3 : (start != NULL) ? addAtAfter() : printf("\nList is Empty\n"); break;
                     case 4 : (start != NULL) ? length() : printf("\nList is Empty\n"); break;
                     case 5 : (start != NULL) ? display() : printf("\nList is Empty\n"); break;
                     case 6 : (start != NULL) ? selectAtBegin() : printf("\nList is Empty"); break; 
                     case 7 : (start != NULL) ? selectAtEnd() : printf("\nList is Empty"); break; 
                     case 8 : (start != NULL) ? selectWithData() : printf("\nList is Empty"); break; 
                     case 9 : (start != NULL) ? swap() : printf("\nList is Empty"); break;
                     case 10 : (start == NULL) ? createList() : printf("\nList Already Created\n"); break;
                     default : printf("\nInvalid Input\n"); 
                    }
            }while (choice != 0); 
          }  

void addAtBegin (void)
                {
                 struct node *temp;
                 temp = (struct node *) malloc (sizeof(struct node));
                 printf("\nEnter Node Data :- ");
                 scanf("%d",&temp->data);
                 temp->prev = NULL;
                 temp->next = start;
                 start->prev = temp;
                 start = temp;
                 printf("\nFirst Node Added Succeessfully\n");
                }

void addAtEnd (void)
              {
               struct node *temp,*p;
               temp = (struct node *) malloc (sizeof(struct node)); 
               printf("\nEnter Node Data :- ");
               scanf("%d",&temp->data);
               temp->next = NULL;
               temp->prev = NULL;
               p = start;
               while(p->next != NULL)
                    {
                     p = p->next; 
                    }
               p->next = temp;
               temp->prev = p; 
               printf("\nLast Node Added Successfully\n");    
              }  

void addAtAfter (void)
                {
                 struct node *p,*q,*temp;
                 int i,position;
                 printf("\nEnter Your Position :- ");
                 scanf("%d",&position);
                 if(position < 1 || position >= length()+1)
                   {
                    printf("\nInvalid Position\n");
                    return;
                   } 
                 temp = (struct node *) malloc (sizeof(struct node));
                 printf("\nEnter Node Data :- ");
                 scanf("%d",&temp->data);
                 temp->next = NULL;
                 temp->prev = NULL;
                 p = start;
                 if(position == 1)
                   {
                    temp->next = p;
                    p->prev = temp;
                    start = temp; 
                   }
                 else
                    {
                     for(i=1; i<position-1; i++)
                        {
                         p = p->next; 
                        }
                     q = p->next;
                     temp->prev = q->prev;
                     temp->next = p->next;
                     p->next = temp;
                     q->prev = temp;
                    }  
                 printf("\nNode Added Successfully at %d Position",position);   
                } 

void createList (void)
                {
                 struct node *temp,*p;
                 int i,n;
                 printf("\nEnter Number of Nodes You Want to Create :- ");
                 scanf("%d",&n);
                 for(i=1; i<=n; i++)
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
                         temp->prev = p;     
                        }  
                    } 
                 printf("\nList Created of %d Nodes\n",n);
                }  

int length (void)
           {
            struct node *p;
            int count; 
            for(count=1 , p=start; p->next != NULL; p=p->next,count++);
            printf("\n%d Nodes Present in Your List",count);
            return count;
           }  

void display (void)
             {
              struct node *p;
              p = start;
              printf("\nYour Nodes Data are :- ");
              while(p != NULL)
                   {
                    printf("%d ",p->data);
                    p = p->next;
                   } 
             }     
            
void selectAtBegin (void)
                   {
                    struct node *p;
                    p = start;
                    start = p->next;
                    start->prev = NULL;
                    printf("\nSelected Node Data is %d",p->data);
                    free(p);
                   }

void selectAtEnd (void)
                 {
                  struct node *p,*q;
                  p = start;
                  while(p->next->next != NULL)
                       {
                        p = p->next;
                       } 
                  q = p->next;
                  p->next = NULL; 
                  printf("\nSelected Node Data is %d",q->data);
                  free(q);     
                 }  

void selectWithData (void)
                    {
                     struct node *p,*q,*r;
                     int num,i,count=0;
                     printf("\nEnter Your Data Which is to be Select From List :- ");
                     scanf("%d",&num);
                     p = start;
                     for(i=1; p != NULL; i++)
                          {
                           if(p->data == num) 
                             {
                              count = 1;
                              break;
                             }
                           p = p->next; 
                          }     
                     if(count == 1)
                       {
                        printf("\n%d Selected from Node Data at %d Position\n",num,i);
                        q = p->prev;
                        r = p->next;
                        q->next = p->next;
                        r->prev = p->prev;
                        free(p);
                       }
                     else
                        {
                         printf("\n%d Data is Not Present in the List\n",num);
                        }
                    }

void swap (void)
          {
           struct node *p,*q;
           int i,position;
           printf("\nEnter Position which is to be Swapped :- ");
           scanf("%d",&position);
           if(position < 1 || position >= length())
             {
              printf("\nPosition Out of Bound");
              return;
             } 
           p = start;  
           for(i=1; i<position; i++)
              {
               p = p->next; 
              }  
           q = p->next;
           p->prev->next = q;
           q->next->prev = p;
           p->next = q->next;
           q->prev = p->prev;
           q->next = p;
           p->prev = q;
           printf("\n%d position Swapped Successfully %d position",position,position+1);
          }          