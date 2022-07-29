#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int choice;
	clrscr();
	printf("Enter to find area of triangl:\nfor finding area of rectangale:\nfor finding area cirale:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			int a,b,c;
			float s,area;
			printf("\nEnter side of tringal:");
			scanf("%d%d%d",&a,&b,&c);
			s=(float)(a+b+c)/2;
			area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
			printf("\nArea of trinagal %f",area);
			break;
		}
		case 2:
		{
			float len,breadth,area;
			printf("\nEnter length and breadth of rectangale:");
			scanf("%d%d",&len,&breadth);
			area=(float)len*breadth;
			printf("\nArea of rectangale%f",area);
			break;
		}
		case 3:
		{
			float redius,area;
			printf("\nEnter redius of circle");
			scanf("%redius",&redius);
			area=(float)3.14159*redius*redius;
			printf("\nArea of circle%f",area);
			break;
		}
		default:
		{
			printf("\ninvalid choice");
			break;
		}


	}
	getch();
}