#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile; // �ŧi���V�ɮת����c����
	char cStr[20];	  // �s��Ū�����r��
	int iNum=0;  // �p��^��r�����Ӽ� 
	if( (pfile = fopen("story.txt","r")) == NULL ) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("story.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	}
	while(!feof(pfile) ) {	// �P�_�O�_Ū���ɮק�
		fscanf(pfile,"%s",cStr);
		printf("%s\n",cStr);
		if( cStr[0] != 10 ) iNum++; // Ū�쪺���O����Ÿ��ɡA�h�[1
	}
	printf("story.txt �@�]�t%3d �ӭ^���r\n",iNum);
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}