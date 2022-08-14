#include<stdio.h>

#include <conio.h>

#include <string.h>

void main()

{

    char str1[50];

    char str2[50];

    clrscr();

    printf("enter any string in stri: ");

    gets(str1);

     strcpy(str2,str1);

    printf("After copy str2 : ",str2);

    getch();
}
