#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile; // �ŧi���V�ɮת����c����
	pfile = fopen("myfirst.txt","w"); // �}���ɮ�
	if( pfile == NULL) { // �ɮ׶}�ҥ��Ѯ�, �����פ���ɮת��s��
		printf("�ɮ׵L�k�}��");	system("pause"); return(0); 
	}
	fprintf(pfile,"%s\n","�ڪ��Ĥ@�� C �ɮ�");
	fclose(pfile); // �����ɮ�
	system("pause"); return(0);
}