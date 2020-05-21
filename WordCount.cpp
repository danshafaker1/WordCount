#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) 
{
	char ch;
	int countc=0;
	int countw=0;
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
			printf("%c",ch);
			if(ch==' '||ch==',')
			{
				countw++;
			}
			ch=fgetc(fp);
		}
		printf("单词数为：%d",countw);
	 }
	 fclose(fp);
}
