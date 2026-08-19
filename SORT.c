#include<stdio.h>
#define SIZE 5

void BUBBLE_SORT();
void SELECTION_SORT();
void INSERTION_SORT();
void QUICK_SORT();
void MERGE_SORT();
int a[]={9,5,2,10,1}; 

void main()
         {
          int choice;

          printf("\nPress 1 : Bubble sort");
          printf("\nPress 2 : Selection sort");
          printf("\nPress 3 : Insertion sort");
          
          printf("\nEnter Your Choice :- ");
          scanf("%d",&choice);

          switch(choice)
                {
                 case 1 : BUBBLE_SORT(); break;
                 case 2 : SELECTION_SORT(); break;
                 case 3 : INSERTION_SORT(); break;
                 default : printf("\nINVALID INPUT");
                } 
         }       

void BUBBLE_SORT()
                {
                 int i,j,temp; 
                 for(i=0; i<SIZE-1; i++)
                    {
                     for(j=0; j<SIZE-i-1; j++)
                        {
                         if(a[j]>a[j+1])
                           {
                            temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;  
                           }  
                        } 
                    } 
                 for(i=0; i<SIZE; i++) { printf("%d ",a[i]); }   
                }  

void SELECTION_SORT()
                   {
                    int i,j;
                    for(i=0; i<SIZE-1; i++)
                       {
                        for(j=i+1; j<SIZE; j++)
                           {
                            if(a[i]>a[j])
                              {
                               a[i] = a[i]+a[j];
                               a[j] = a[i]-a[j];
                               a[i] = a[i]-a[j];
                              } 
                           }
                       } 
                    for(i=0; i<SIZE; i++) { printf("%d ",a[i]); }   
                   }

void INSERTION_SORT()
                   {
                    int i,j,curr; 
                    for(i=1; i<SIZE; i++)
                        {
                         curr = a[i];
                         j=i-1;
                         while(j>=0 && a[j]>curr)  
                              {
                               a[j+1] = a[j];
                               j--;  
                              }
                         a[j+1] = curr;
                        }
                    for(i=0; i<SIZE; i++) { printf("%d ",a[i]); }   
                   }
