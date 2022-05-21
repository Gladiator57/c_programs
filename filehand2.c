#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("D:\\input1.txt","r");
	printf("The Entered text is\n");
	ch=fgetc(fp);
	while((ch=fgetc(fp))!=EOF)
//	while(ch!=EOF)
	putchar(ch);
	fclose(fp);
}
