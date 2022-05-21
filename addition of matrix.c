#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,first[10][10],second[10][10],sum[10][10];
	
	printf("Enter the no.of rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of First matrix:");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	     scanf("%d",&first[i][j]);
	printf("Enter the Elements in second matrix:");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	     scanf("%d",&second[i][j]);
	
	printf("Sum of entered elements:-\n");
		for(i=0;i<r;i++){
	       for(j=0;j<c;j++){
	sum[i][j]=first[i][j]+second[i][j];
	printf("%d\t",sum[i][j]);
}
printf("\n");
}
	
	
}
