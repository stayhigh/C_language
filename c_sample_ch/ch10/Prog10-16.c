#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile;
	char cDate[5], cTel[20], cBuf[80];
	if((pfile=fopen("message.txt","r+"))==NULL) { 
		printf("message.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	} //�}�ҧ�s���ɮ�
	while( !feof(pfile) ) { // ����ɮת����e
		fgets(cBuf,80,pfile);
		printf("%s",cBuf);
	}
	rewind(pfile); //Ū�g�Y�^���ɮ��Y
	printf("\n��J��f���:");
	gets(cDate);
	if( strlen(cDate) == 1 ) { //����u���@�Ӧr��
		cDate[2] = '\0'; cDate[1] = cDate[0];
		cDate[0] = ' '; // �e���ɤ@�Ӫť�
	}
	printf("��J�s���q��:");
	gets(cTel);
	// �NŪ�g�Y���V�������m,����O���Bytes
	fseek(pfile,20,SEEK_SET);
	fputs(cDate,pfile);
	// �NŪ�g�Y���V�q�ܪ���m
	fseek(pfile,48,SEEK_SET);
	fputs(cTel,pfile);
	rewind(pfile); //Ū�g�Y�^���ɮ��Y
	while( !feof(pfile) ) { // ����ɮת����e
		fgets(cBuf,80,pfile);
		printf("%s",cBuf);
	}
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}