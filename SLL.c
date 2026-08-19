// Add at Begining , Add at After , Add at End , Delete First NODE , Delete Specified NODE
// Display , Length , Reverse List , Swap Two NODE , Sort Element , Create List

#include<stdio.h>
#include<stdlib.h>

struct node {
             int data;
             struct node *link;
            };

struct node *start = NULL;            
int len;

void addAtBegin (void);
void addAtEnd (void);
void addAtAfter (void);
int length (void);
void display (void);
void deleteAtBegin (void);
void deleteAtEnd (void);
void deleteAtAfter (void); 
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
            printf("\nPress '6' to Delete a Node At Begin");
            printf("\nPress '7' to Delete a Node At End");
            printf("\nPress '8' to Delete a Node At After");   
            printf("\nPress '9' to Swap Nodes");
            printf("\nPress '10' to Create List");         
            
            printf("\nEnter Your Choice :- ");
            scanf("%d",&choice);
             
            switch(choice)
                  {
                   case 0 : printf("\nProgramme Completed Successfully\n"); break;  
                   case 1 : addAtBegin(); break;
                   case 2 : addAtEnd(); break;
                   case 3 : addAtAfter(); break;
                   case 4 : len = length(); printf("\n%d Nodes is Presesnt\n",len); break;
                   case 5 : display(); break;
                   case 6 : deleteAtBegin(); break;
                   case 7 : deleteAtEnd(); break;
                   case 8 : deleteAtAfter(); break;
                   case 9 : swap(); break;
                   case 10 : (start == NULL) ? createList() : printf("\nList Already Created\n"); break;
                   default : printf("\nInvalid Input\n");  
                  }

            }while(choice != 0);  
         }

void addAtBegin (void)
                {
                 struct node *temp;
                 temp = (struct node *) malloc (sizeof(struct node));
                 printf("\nEnter Node Data :- ");
                 scanf("%d",&temp->data);
                 temp->link = start;
                 start = temp; 
                 printf("%d is Successfully Added\n",temp->data);   
                }

void addAtEnd (void)
              {
               struct node *temp,*p;
               temp = (struct node*) malloc (sizeof(struct node));
               printf("\nEnter Node Data :- ");
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
               printf("%d is Sucessfully Added\n",temp->data);  
              } 

void addAtAfter (void)
                {
                 struct node *temp,*p;
                 int i,position;
                 printf("\nEnter Position of Node :- ");
                 scanf("%d",&position);
                 if(position<1 || position>length()+1 ) { printf("\nInvalid Position\n"); return; }
                 temp = (struct node *) malloc (sizeof(struct node));
                 printf("\nEnter Node Data :- ");
                 scanf("%d",&temp->data);
                 temp->link = NULL;
                 if(position == 1)
                    {
                     temp->link =  start;
                     start = temp;
                     printf("\n%d is Successfully Added\n",temp->data);
                    }  
                 else
                    {
                     p = start;
                     for(i=1; i<position-1 && p != NULL; i++)
                        {
                         p = p->link;
                        }
                     if(p == NULL)
                        {
                         printf("\nInput is Out of The Bound");  
                        }
                     else
                        {   
                         temp->link = p->link;
                         p->link = temp;
                         printf("\n%d is Successfully Added\n",temp->data);
                        }   
                    } 
                 } 
            
int length (void)
            {
             struct node *p;  
             int count=0;
             p = start;
             while(p != NULL)
                  {
                   p = p->link;
                   count++;
                  }
             return count;
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

void deleteAtBegin (void)
                   {
                    struct node *p;
                    if(start == NULL)
                      {
                       printf("\nThere is Not Nodes Present in the Linked-list");
                       return;
                      }
                    p = start;
                    start = p->link;
                    p->link = NULL;
                    free(p);
                    printf("\nFirst Node Deleted Successfully");
                   }

void deleteAtEnd (void)
                   {
                    struct node *p,*q;
                    if(start == NULL)
                      {
                       printf("\nThere is Not Nodes Present in the Linked-list");
                       return;
                      }
                    p = start;  
                    if(p->link == NULL)
                      {
                       p->link = NULL;
                       start = NULL;
                       free(p);      
                       printf("\nLast Node Deleted Successfully");
                      }
                    else
                       {      
                        while(p->link->link != NULL)
                             {
                              p = p->link;  
                             }
                        q = p->link;
                        p->link = NULL;
                        free(q);      
                        printf("\nLast Node Deleted Successfully");
                       } 
                   }                   

void deleteAtAfter (void)
                   {
                    struct node *p,*q;
                    int i,position;
                    printf("\nEnter Position of the Node Which is to be Deleted :- ");
                    scanf("%d",&position);
                    if(position < 1 || position > length())
                      {
                       printf("\nInvalid Position\n");  
                      }               
                    else if(position == 1)
                            {
                             p = start;
                             start = p->link;
                             p->link = NULL;
                             free(p);  
                            }
                    else
                       {
                        p = start;
                        for(i=1; p != NULL && i < position-1; i++ )
                            {  
                             p = p->link;  
                            }
                        q = p->link;  
                        p->link = q->link;
                        free(q);
                        printf("\nNode Deleted Successfully"); 
                       }          
                   }

void swap (void)
          {
           struct node *p,*q,*r;
           int position,i;
           printf("\nEnter the Position You want to Swap :- ");
           scanf("%d",&position);
           if(position < 1 || position >= length())
              {
               printf("\nPosition Out of Bounds");
               return;
              }     
           if(start == NULL)
             {
              printf("\nThere is Not Nodes Present in the Linked-list");
              return;
             }
           if(position == 1)
             {
              if(start->link == NULL)
                {
                 printf("\nLinked-list Contains Only One Node Add few Nodes");  
                }
              else
                 {
                  p = start;
                  q = p->link;
                  p->link = q->link;
                  q->link = p;
                  start = q;
                  printf("\nNode Swapped Successfully");
                  return;
                  } 
             }       
             p = start; 
             for(i=1; i<position-1; i++)
                {
                 p = p->link;
                } 
             q = p->link;
             r = q->link;
             if(r == NULL) 
               {
                printf("\nNo adjacent node to swap with\n");
                return;
               }
              q->link = r->link;
              r->link = q;
              p->link = r;
              printf("\nYour Nodes are Swapped Successfully\n");              
             }    

void createList (void)
                {
                 struct node *temp,*p;
                 int i,n;
                 printf("\nEnter Number of List you Want to Create :- ");
                 scanf("%d",&n);
                 for(i=1; i<=n; i++)
                    {
                     temp = (struct node *) malloc (sizeof(struct node));
                     printf("\nEnter %d Node Data :- ",i);
                     scanf("%d",&temp->data);
                     temp->link = NULL;
                     if(start == NULL)
                       {
                        start =  temp;
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
                 printf("%d Node Created Successfully",n);
                }  