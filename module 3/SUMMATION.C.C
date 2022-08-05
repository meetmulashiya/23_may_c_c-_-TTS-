#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();

	printf("input number:");
	sacnf("%d",&a);

	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("\nSummation of number = %d",sum);
	getch();
}