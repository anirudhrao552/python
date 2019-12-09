/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,ch;
    printf("\n enter the values  ");
    scanf("%d%d",&a,&b);
    printf("\n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division");
    printf("\n enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\n sum is %d",a+b);break;
        case 2: printf("\n difference is %d",a-b);break;
        case 3: printf("\n product is %d",a*b);break;
        case 4: printf("\n quoteint is %d",a/b);break;
        default : printf("\n invalid choice...!");
    }
}
