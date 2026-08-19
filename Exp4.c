// Experiment 4: Resize a Dynamic Array using realloc() function.
#include<stdio.h>
#include<stdlib.h>
void main()
        {
         int n1,i,*ptr,n2;
         printf("\nEnter Array Size :- ");
         scanf("%d",&n1);
         ptr = (int *) malloc (n1*sizeof(int));
         for(i=0; i<n1; i++)
            {
             printf("\nEnter %d Element :- ",i+1);
             scanf("%d",(ptr+i));   
            }     
         printf("\nYour Array :- ");
         for(i=0; i<n1; i++)
            { 
             printf("%d ",*(ptr + i)); 
            }
         printf("\nEnter New Size of Array :- ");
         scanf("%d",&n2);
         ptr=(int *)realloc(ptr,n2*sizeof(int));
         for(i=n1; i<n2; i++)
            {
             printf("\nEnter %d Element :- ",i+1);  
             scanf("%d",(ptr+i));   
            }
            printf("\nYour Array :- ");
         for(i=0; i<n2; i++)
            { 
             printf("%d ",*(ptr + i)); 
            }
         free(ptr);   
        }