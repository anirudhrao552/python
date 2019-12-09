/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
  int a,b;
  for(a=1;a<=10;a++)
  {
      for(b=1;b<=20;b++)
      {
          printf("\n %d x %d = %d",a,b,a*b);
      }
      printf("\n\n");
  }
}

