#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int n,r,l,w,b,h;
	float area;
	clrscr();
	printf("\n1.Enter to find area of triangl:");
	printf("\n2.for finding area of rectangale:");
	printf("\n3.for finding area cirale:");
	printf("\nEnter number of geomatrical shape:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:

			printf("\nEnter base of trinagl:");
			scanf("%d",&b);
			printf("\nEnter hight of trinagl:");
			scanf("%d",&h);
			area=0.5*b*h;
			printf("\narea of tha trinagl=%f",area);
			break;

		case 2:
			printf("\nEnter length and breadth of rectangale:");
			scanf("%d%d",&l,&b);
			area=l*b;
			printf("\nArea of rectangale %f",area);
			break;

		case 3:
			printf("\nEnter redius of circle");
			scanf("%d",&r);
			area=3.1415*r;
			printf("\nArea of circle%f",area);
			break;

		default:

			printf("\ninvalid choice");
			break;



	}
	getch();
}
