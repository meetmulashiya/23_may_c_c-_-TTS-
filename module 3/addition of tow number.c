#include <stdio.h>
#include<conio.h>
void main()
{
   int first, second, *p, *q, sum;
  clrscr();

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   getch();
}
