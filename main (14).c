/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n enter three value :");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    printf("\n all are equal ");
    else if(a>b && a>c)
    printf("\n a is big ");
    else if(b>c)
    printf("\n b is big ");
    else
    printf("\n c is big ");
    return 0;
}
