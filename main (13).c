/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("\n enter two value :");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("\n a is big ");
    else if(b>a)
    printf("\n b is big ");
    else
    printf("\n both are equal ");
    return 0;
}
