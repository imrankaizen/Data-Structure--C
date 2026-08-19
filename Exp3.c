// Experiment 3: Create a Dynamic array using calloc() function
#include<stdio.h>
#include<stdlib.h>
void main()
        {
         int *ptr,i,n;
         printf("\nEnter Size of Your Array :- ");
         scanf("%d",&n);
         ptr = (int *) calloc (n,sizeof(int));
         printf("\nEnter %d Elements :- ",n);
         for(i=0; i<n; i++)
            {
             scanf("%d",(ptr+i));   
            }   
         printf("\nYour Array :- ");
         for(i=0; i<n; i++)
            {
             printf("%d ",*(ptr + i)); 
            }
          free(ptr);      
        }