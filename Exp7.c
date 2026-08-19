// Experiment 7: Declare a structure having 3 integers with the help of structure pointer print the greatest between them
#include<stdio.h>
struct integer {
                int a,b,c;
               };
void main(void)
        {
         struct integer *p,num;
         int g;
         p = &num;
         printf("\nEnter Three Number :- ");
         scanf("%d %d %d",&p->a,&p->b,&p->c);
         g = p->a; 
         if(p->b > g) { g = p->b; }
         if(p->c > g) { g = p->c; }
         printf("\nGreatest number is %d ",g);
        }