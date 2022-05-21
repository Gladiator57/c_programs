#include<stdio.h>
struct employee
{
	char id[15];
	char name[20];
	int salary[10];
};
 void main()
 {
 	int i;
 	struct employee emp[3];
 	for(i=0;i<3;i++)
 	{
 	printf("Enter Employee details : \n");
 	scanf("%s%s%d",emp[i].id,emp[i].name,&emp[i].salary);
	}
	
		printf("The Entered Details are::\n");
	for(i=0;i<3;i++)
	{
		printf("Id : %s\nName : %s\nSalary : %d\n\n",emp[i].id,emp[i].name,emp[i].salary);	
	}
	
 }
