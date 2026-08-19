// Experiment 2: Create a Dynamic Array using malloc() function.
#include<stdio.h>
#include<stdlib.h>
void main()
        {
         int *ptr,i,n;
         printf("\nEnter Size of Your Array :- ");
         scanf("%d",&n);
         ptr = (int *) malloc(n*sizeof(int));
         printf("\nEnter %d Elements :- \n",n);
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