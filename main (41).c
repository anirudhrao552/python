/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int pid,qty,count=0;
    char pname[20],ch='y';
    float amount,tamount=0;
    while(ch == 'y' || ch == 'Y')
    {
        printf("\n enter product id :");
        scanf("%d",&ch);
        printf("\n enter product name :");
        scanf("%d",&pname);
        printf("\n enter product price :");
        scanf("%d",&price);
        printf("\n enter product quantity :");
        scanf("%d",&qty);
        amount=qty*price;
        tamount+=amount;
        count++;
        printf("\n do you wish to continue?(y/n) :");
        ch=getche();
        //fflush(stdin);
        //scanf("%c",&ch);
       
    printf("\n No of items purchase %d",count);
    }
    return 0;
}

