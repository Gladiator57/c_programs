#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,n,i;
	printf("Enter :");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		a+=i;
	}
//a+=a;
	printf("The sum of the n odd numbers is %d",a);
	getch();
}

