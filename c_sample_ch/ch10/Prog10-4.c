#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *pfile;	// �ŧi���V�ɮת����c����
	char cStr[80];	// �s��Ū�����r��
	char cSearch[10];	// ��J���Ǹ�
	unsigned int iLength; 	// �Ǹ�������
	int  iFlag = 0; // �N��䤣���J���Ǹ�
	if( (pfile = fopen("stuinfo.txt","r")) == NULL ) {  // �P�_�ɮ׬O�_�}�ҥ���
		printf("stuinfo.txt �ɮ׵L�k�}��"); system("pause"); return(0); 
	}
	printf("�п�J���d�ߪ��Ǹ�: ");scanf("%s",cSearch);
	iLength = strlen(cSearch); // �p���J�Ǹ�������
	while(!feof(pfile) ) {	// �P�_�O�_Ū���ɮק�
		fgets(cStr,80,pfile);
		if( strncmp(cStr, cSearch, iLength) == 0 ) { // ����J���Ǹ�
			printf("%s",cStr); iFlag = 1; // ��X�ǥ͸�ƨó]�w�ǥͤw�g���
		}
	}
	if( iFlag == 0 ) printf("�䤣���J���ǥ�\n");
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}