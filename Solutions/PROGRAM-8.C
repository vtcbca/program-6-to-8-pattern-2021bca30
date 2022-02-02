/* write a program to print a following pattern
  *
 * *
* * *		*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf(" ");
		}
		for(s=1;i>=s;s++)
		{
			printf(" * ");
		}
		printf("\n");
	}

	getch();
}

