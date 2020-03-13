#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>

void gotoxy(int x,int y)
{
	COORD pos;pos.X=x-1;pos.Y=y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main()
{
	system("color f0");
	long i;
	char FileName[100];
	char hi[28056];
	FILE *in;

	system("C:\\Users\\�ɿɼ嵰\\Desktop\\Lu.mp3");
	Sleep(3000);

	for(i=0;i<=241;i++)
	{
		sprintf(FileName,
			"C:\\Character animation\\Cheetah\\txtpicture\\(%1d).txt",i);
		in=fopen(FileName,"r");
		assert(in!=NULL);
		fread(hi,1,28056,in);
		printf("%s\n%d",hi,i);
		gotoxy(1,1);
		Sleep(900);
		fclose(in);
	}
}