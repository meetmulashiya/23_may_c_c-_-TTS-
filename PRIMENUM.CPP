#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,r=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		r=1;
		break;
	}
	if(r==0)
	{
		printf("this number is prime No");
	}
	else
	{
		printf("this number is not prime NO");
	}
	getch();
}







