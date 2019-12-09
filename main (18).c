/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("\n enter the number ");
    scanf("%d",&n);
    if(n>=0 && n<10)
    printf("\n one digit ");
    else if(n<100)
    printf("\n its a two digit ");
    else if(n<1000)
    printf("\n its a three digit ");
    else if(n<10000)
    printf("\n its a four digit ");
    return 0;
}
