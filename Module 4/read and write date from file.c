#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *p:
    char ch;
    clrscr();
    p = fopen("AAA.txt","r");
    if (p==NULL)
    {
        printf("File not found");
    }
    else
    {
        ch = fgetc(p);
        while(ch!=EOF){
        printf(",ch);
        ch= fgetc(p);
    }
        fclose(p); 
        getch();
}                                    
