/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

main()
{
    int a,n;
    printf("\n enter the value ");
    scanf("%d",&n);
    a=1;
    while(a<=20)
    {
        printf("\n %d X %d = %d",n,a,a*n);
        a++;
    }
}
