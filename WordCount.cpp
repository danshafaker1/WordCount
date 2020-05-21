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
		printf("字符数为：%d",countc);
	}
	else if(!strcmp(argv[1],"-w"))
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			if((ch!=' '&&ch!=',')&&(ch2==' '||ch2==',')&&(ch1!=' '&&ch1!=',')&&temp==true)
			{
				countw++;
				temp=false;
			}
			if((ch!=' '&&ch!=',')&&(ch2==' '||ch2==','))
			{
				countw++;
			}
			ch1=ch2;
			ch2=ch;
			ch=fgetc(fp);
		}
		countw--; 
		printf("单词数为：%d",countw);
	 }
	 fclose(fp);
}
