/*Write a c program to check whether the number is even or odd*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter the number to be checked=");
	scanf("%d",&num);
	(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
	getch();
}
