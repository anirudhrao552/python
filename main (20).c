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
    printf("\n enter the date  ");
    scanf("%d",&a);
    char ch;
    switch(a)
    {
        case 1: printf("\n sunday ");break;
        case 2: printf("\n monday ");break;
        case 3: printf("\n tuesday ");break;
        case 4: printf("\n wednesday ");break;
        case 5: printf("\n thursday ");break;
        case 6: printf("\n friday ");break;
        case 7: printf("\n saturday ");break;
        default : printf("\n invalid day...!");
    }
}
