/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    printf("\n enter the alphabet ");
    scanf("%c",&ch);
    ch=tolower(ch);
    switch(ch)
    {
        case 'a': printf("\n its a vowel ");break;
       case 'e': printf("\n its a vowel ");break;
       case 'i': printf("\n its a vowel ");break;
       case 'o': printf("\n its a vowel ");break;
       case 'u': printf("\n its a vowel ");break;
        default : printf("\n its a consonant");
    }
}
