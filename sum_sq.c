//Program to print sqares and sum of squares of first ten natural number
#include"stdio.h"
#include"conio.h"
void main()
{
	int a,b;
	clrscr();
	a=1;
	b=0;
	while(a<=10)
	{
	    textcolor(a);
	    cprintf("\nsquare of %d = %d",a,a*a);
	    b+=(a*a);
	    a++;	   	
}
printf("\nsum of squares = %d",b);
getch();
}
