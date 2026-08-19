// Push Pop Peek Traverse Quit
#include<stdio.h>
#define CAPACITY 5

void push();
int pop();
void peek();
void traverse();
int isFull();
int isEmpty();

int stack[CAPACITY],x=-1;

void main()
        {
         int num,item;
         do
           {
            printf("\nPress :- 1 to Push ");
            printf("\nPress :- 2 to Pop ");  
            printf("\nPress :- 3 to Peek ");
            printf("\nPress :- 4 to Traverse ");   
            printf("\nPress :- 5 to Quit "); 
            printf("\n\nEnter Your Choice :- ");
            scanf("%d",&num);
         switch(num)
                {
                 case 1 : { push();  break; }  
                 case 2 : { 
                            item=pop(); 
                            if(item==0) { printf("\nStack is Empty"); }
                            else { printf("\nItem Poped : %d \n",item); } 
                            break; 
                          }
                 case 3 : { peek(); break;  }
                 case 4 : { traverse(); break; }
                 case 5 : { printf("\nProgramme Quited Successfully"); break; }
                 default : printf("\nINVALID INPUT");
                }
            } while (num!=5);      
        }

int isFull()
        {
         if(x==(CAPACITY-1)) { return 1; } 
         else { return 0; }  
        } 

int isEmpty()
        {
         if(x==-1) { return 1; } 
         else { return 0; }  
        } 

void push()
        {
         if(isFull()==1) { printf("\nStack is Full\n"); }
         else 
            {
             int element;
             printf("\nEnter Your Element Which is to be Pushed :- ");
             scanf("%d",&element);
             stack[++x]=element;
             printf("\n%d is Pushed Successfully\n",element);  
            }  
        }

int pop()
        {
         if(isEmpty()==1) { return 0; } 
         else
            {
             return stack[x--]; 
            }   
        }
        
void peek()
        {
         if(isEmpty()==1) { printf("\nStack is Empty"); }   
         else
            {
             printf("\nPeeked Element :- %d\n",stack[x]);   
            }
        }        
        
void traverse()
        {
         if(isEmpty()==1) { printf("\nStack is Empty"); }
         else
            {          
             int i; 
             printf("\nStack Elements are :- ");
             for(i=0; i<=x; i++)
                {
                 printf(" %d",stack[i]);   
                } 
            }  
        }        