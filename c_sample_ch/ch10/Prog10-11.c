#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfin, *pfout;
	char cBuf[30];
	int  iLen;
	if((pfin=fopen("story.txt","r"))==NULL){ 
		printf("story.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	} // �}��Ū�����ɮ�
	if((pfout=fopen("styout.txt","w"))==NULL){  
		printf("styout.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	}
	while( !feof(pfin) ) {
		iLen = fread(cBuf, sizeof(char), 12, pfin); // �@���̦hŪ�� 12 �Ӧ줸��
		fwrite(cBuf, sizeof(char), iLen, pfout); // �N��Ƽg�J pfout �ɮ�
		cBuf[iLen] = '\0'; // �]�w���r���X
		printf("Ū��%2d Bytes.���e:%s\n",iLen,cBuf);
	}
	fclose(pfin); fclose(pfout); system("pause"); return(0); // �����ɮ�
}