// // Experiment 6: Write a programme to concatenate two Strings.
// #include<stdio.h>
// #include<stdlib.h>
// void Concatenate(char *,char *);
// void main(void)
//         {
//          char *p1,*p2;
//          int s1,s2,l1,l2,i,j;
//          printf("\nEnter Your First String Size :- ");
//          scanf("%d",&s1);
//          printf("\nEnter Your Second String Size :- ");
//          scanf("%d",&s2);
//          fflush(stdin);
//          p1 = (char *) malloc ((s1+s2+1)*sizeof(char));
//          p2 = (char *) malloc ((s2+1)*sizeof(char));  
//          printf("\nEnter Your First String :- ");
//          gets(p1);
//          printf("\nEnter Your Second String :- ");
//          gets(p2);
//          Concatenate(p1,p2);
//          printf("\nYour String After Concatenation is :- ");
//          puts(p1);
//         }
// void Concatenate(char *x,char *y)
//                 {
//                  int i,j;
//                  for(i=0; x[i]!='\0'; i++);
//                  for(j=0; y[j]!='\0'; j++,i++)
//                      {
//                       x[i]=y[j];  
//                      } 
//                  x[i]='\0';      
//                 }
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2); 
    strcat(str1, str2);
    printf("Concatenated String:- ");
    puts(str1);
}
