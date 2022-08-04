#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);

	while(a>0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
	getch();
}