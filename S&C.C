#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	float r,si,amount,ci;
	printf("Enter principal,time and rate of intrest:");
	scanf("%d%d%f",&a,&b,&r);
	si=a*b*r/100;
	printf("\nSimple intrest=%.3f",si);
	amount=a*((1+r/100),b);
	ci=amount-a;
	printf("\ncompound intrest=%.3f",ci);
	getch();

}