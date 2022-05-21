#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
//	clrscr();
	fp=fopen("D:\\input1.txt","w");
	if(fp==NULL)
	{
		printf("\nError opening file");
		exit(0);
	}
	printf("\n enter some text here and press ctrl D or Z to stop:\n");
	
	//ch=getchar();
	while((ch=getchar())!=EOF)
	fputc(ch,fp);
	fclose(fp);
	fp=fopen("D:\\input.txt","r");
	printf("The Entered text is\n");
//	ch=fgetc(fp);
	while((ch=fgetc(fp))!=EOF)
	putchar(ch);
	fclose(fp);
}
