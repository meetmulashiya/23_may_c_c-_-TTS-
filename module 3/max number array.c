#include<stdio.h>
#include<conio.h>
void main()
{

    int a[100], size,i,max;
    clrscr();
    printf("Enter size of arry:");
    scanf("%d", &size);
    printf("\nEnter value in arry:");
    for (i=0;i<size;i++)
    {

        scanf("%d",&a[i]);

    }
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        } 
    }
    printf("Maximum value of Array: %d",max);
    getch();
}
