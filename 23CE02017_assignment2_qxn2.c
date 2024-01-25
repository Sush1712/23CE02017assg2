#include<stdio.h>
int main()
{
 int a,b,c,big;
 printf("enter a,b and c");
 scanf("%d %d %d",&a, &b, &c);
 big=a>b? (a>c?a:c):(b>c?b:c);
 printf("\n the biggest number is: %d",big); 
}