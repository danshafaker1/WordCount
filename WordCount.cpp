#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) 
{
	char ch;
	int countc=0;
	int countw=0;
	bool temp=true;
	FILE *fp;
	fp=fopen(argv[2],"r");
	if(!strcmp(argv[1],"-c"))
	{
	
		while(fgetc(fp)!=EOF)
		{
			countc++;
		}
		printf("�ַ���Ϊ��%d",countc);
	}
	else if(!strcmp(argv[1],"-w"))
	{
		while(fgetc(fp)!=EOF)
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		printf("������Ϊ��%d",countw);
	 }
	 fclose(fp);
}
