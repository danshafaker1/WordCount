#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) 
{
	char ch=' ';
	char ch1=' '; 
	char ch2=' ';
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
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			if(((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))&&(ch2==' '||ch2==',')&&((ch1>='a'&&ch1<='z')||(ch1>='A'&&ch1<='Z'))&&temp==true)
			{
				countw++;
				temp=false;
			}
			if(((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))&&(ch2==' '||ch2==','))
			{
				countw++;
			}
			ch1=ch2;
			ch2=ch;
			ch=fgetc(fp);
		}
		countw--; 
		printf("������Ϊ��%d",countw);
	 }
	 fclose(fp);
}
