/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("\n enter the number ");
    scanf("%d",&a);
    if(a>=0 && a<10)
    printf("\n one digit ");
    if(a>=10 && a<100 )
    printf("\n its a two digit ");
    if(a>=100 && a<1000)
    printf("\n its a three digit ");
    if(a>=1000 && a<10000)
    printf("\n its a four digit ");
    return 0;
}
