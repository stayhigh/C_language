#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;// �s��Ū�����r��
	FILE *pfile;// �ŧi���V�ɮת����c����
	if( (pfile = fopen("story.txt","r")) == NULL ) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("story.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	}
	while(!feof(pfile) ) {	// �P�_�O�_Ū���ɮק�
		ch = fgetc(pfile);	// Ū���@�Ӧr��
		putchar(ch);		// ��XŪ�����r��
	}
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}