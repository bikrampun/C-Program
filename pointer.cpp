/*
Bikram Pun
Software Engineer
*/

/*Program to display two number using pointer and function*/

#include<stdio.h>
#include<conio.h>
int i;
void input(int *p);
void display(int *p);

void main()
{
	int a[2],*p;
	p=a;
	input(p);
	display(p);
	getch();
}

void input(int *p)
{
	printf("Enter two numbers\n");
	for(i=0;i<2;i++)
	scanf("%d",(p+i));
}

void display(int *p)
{
	printf("The two numbers are ");
	for(i=0;i<2;i++)
	printf("\t%d",*(p+i));
}
