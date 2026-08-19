#include<stdio.h>
#define CAPACITY 5

void insert (void);
void delete (void);
void display (void);

int QUEUE[CAPACITY],start = 0,end = 0;

void main (void)
          {
           int choice;
           do
           {
            printf("\nPress : 0 to Quit");
            printf("\npress : 1 to Insert");
            printf("\npress : 2 to Delete");
            printf("\npress : 3 to Display");
            
            printf("\nEnter Your Choice :- ");
            scanf("%d",&choice);

            switch(choice)
                  {
                   case 0 : printf("\nProgramme Quitted Successfully\n");
                            break;
                   case 1 : insert();
                            break;
                   case 2 : delete();
                            break;             
                   case 3 : display();
                            break;
                   default : printf("\nINVALID INPUT\n");         
                  }  
           }while(choice != 0);
           printf("\nProgramme Completed Successfully");
          }  

void insert (void)
            {
             if(end == CAPACITY)
               {
                printf("\nQUEUE is FULL\n");
                return;
               }    
             int data;
             printf("\nEnter Your Data :- ");
             scanf("%d",&data);
             QUEUE[end++] = data;
             printf("%d Data Inserted Successfully\n",data);   
            }

void delete (void)
            {
             int data,i;   
             if(start == end)
               { 
                printf("\nQUEUE is EMPTY\n");
                return;
               } 
             data = QUEUE[start];
             printf("\n%d is Your Deleted Data\n",data); 
             for(i=0; i<end-1; i++)
                {
                 QUEUE[i] = QUEUE[i+1];
                }
             end--;   
            }

void display (void)
            {
             int i;
             if(start == end)
               {
                printf("\nQUEUE is EMPTY\n");
                return;
               }
             printf("\nYour QUEUE Data are :- ");
             for(i=0; i<end; i++)
                {
                 printf("%d  ",QUEUE[i]);   
                } 
             printf("\n");       
            }    