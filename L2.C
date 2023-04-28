#include<stdio.h>
#include<conio.h>
main()
{   clrscr();
    int neutral;
    printf("enter number=");
    scanf("%d",&neutral);
    if(neutral>0)
    {
	 printf("your numberis negetive");
    }
    else if(neutral==0)
    {
	 printf("your number is neutral");
    }
    else if(neutral<0)
    {
	 printf("your number is positive");
    }
    getch();

}