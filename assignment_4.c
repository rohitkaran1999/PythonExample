#include<stdio.h>
#include<conio.h>
typedef struct employee
{
	int id;
	float salary;
	float exp; 
}emp;
void read(emp [],int);
void display(emp [],int);
void swap(emp *,emp *);
void l_search(emp [],int);
void bubble_sort(emp [],int);
void main()
{
	emp e[5];
	int n;
	char d;
	printf("Enter the no. of employees=>");
	scanf("%d",&n);
	read(e,n);
	printf("\n \t\t Unsorted Details are as follows=>");
	display(e,n);
	bubble_sort(e,n);
	printf("\n \n\t\t Sorted Details are as follows=");
	display(e,n);
	printf("\n \nDo you wish to search the database on basis of Id. if yes type 'y' else type 'n'");
	scanf("\n%c",&d);
	if(d=='y')
	{l_search(e,n);}
	getch();
}
void read(emp e[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Enter the Id,Salary,Experience of employee %d=>",i+1);
		scanf("%d%f%f",&e[i].id,&e[i].salary,&e[i].exp);
	}
}
void display(emp e[],int n)
{
	int i;
	printf("\n Sr.no\t | Id.\t | Salary\t\t | Experience\t");
	printf("\n ------------------------------------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\n %d\t | %d\t | %f\t\t | %0.1f\t\t",i+1,e[i].id,e[i].salary,e[i].exp);
	}
}
void swap(emp *a,emp *b)
{
	emp temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubble_sort(emp e[],int n)
{
	int i,c,p;
	for(p=1;p<n;p++)
	{
		for(c=0;c<(n-p);c++)
		{
			if(e[c].id>e[c+1].id)
			{swap(&e[c],&e[c+1]);}
		}
	}
}
void l_search(emp e[],int n)
{
	int key,i;
	printf("\n \n Enter the desired Id.=");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(e[i].id==key)
		{
		printf("\n \nThe Id is found at serial no. %d",i+1);
		printf("\n \nFollowing data for the Roll no.=");
		printf("\n \n Sr.no\t | Id.\t | Salary\t\t | Experience\t");
		printf("\n ------------------------------------------------------------");
		printf("\n %d\t | %d\t | %f\t\t | %0.1f\t\t",i+1,e[i].id,e[i].salary,e[i].exp);
		break;
		}
	}
	if(i==n)
	{
		printf("\n \nNo such Id is to be found");
	}
}


