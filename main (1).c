/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
main()
{
int a,b,c;
printf("\n enter the values:");
scanf("%d%d",&a,&b);
printf("\n Before swap a=%d \t b=%d",a,b);
c=a;
a=b;
b=c;
printf("\n after swap a=%d \t b=%d",a,b);
}