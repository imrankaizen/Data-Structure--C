// Experiment 5: Write a programme to declare a string using pointer and print its reverse.
#include<stdio.h>
#include<stdlib.h>
void REVERSE(char *);
void main(void)
        {
         char *p;
         int n;
         printf("\nEnter Your String Size :- ");
         scanf("%d",&n);
         fflush(stdin);
         p = (char *) malloc ((n+1)*sizeof(char));
         printf("\nEnter your string :- ");
         gets(p);
         REVERSE(p);
         printf("\nYour String in Reverse :- ");
         puts(p);
         free(p);
        }
void REVERSE(char *x)
            {
             int i,j,l;
             char temp;
             for(l=0; x[l]!='\0'; l++);
             for(i=0,j=l-1; i<j; i++,j--)
                {
                 temp=x[i];
                 x[i]=x[j];
                 x[j]=temp;
                }
            }