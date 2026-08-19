// Experiment 1: Declare an array and access its values using pointer.
#include<stdio.h>
void main()
        {
         int a[5],*ptr,i;
         ptr=a;
         printf("\nEnter Your Array : \n");
         for(i=0; i<5; i++)
            {
             printf("\nEnter %d Element :- ",i+1);
             scanf("%d",(ptr+i));   
            }
         printf("\nYour Array :- ");
         for(i=0; i<5; i++)
            {
             printf("%d ",*(ptr+i));   
            }   
        }