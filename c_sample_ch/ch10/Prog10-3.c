#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE *pfile; // �ŧi���V�ɮת����c����
	char ch;	  // �s��Ū�����r��
	int iNum=0;  // �p��^��r�����Ӽ� 
	if( (pfile = fopen("story.txt","r")) == NULL ) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("story.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	}
	while(!feof(pfile) ) {	// �P�_�O�_Ū���ɮק�
		ch = fgetc(pfile);	// Ū���@�Ӧr��
		if( isalpha(ch) ) iNum++; //�p�G�O�^��r�� iNum �N�[1
	}
	printf("story.txt �@�]�t%3d �ӭ^��r��\n",iNum);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}