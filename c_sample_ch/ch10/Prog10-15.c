#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfile;
	char cBuf[30];
	if( (pfile = fopen("ftell.txt","r")) == NULL ) { 
		printf("ftell.txt �ɮ׵L�k�}��");
		system("pause"); return(0); 
	} //�}���ɮ�
	printf("�ɮװ_�l��m: %2d\n",ftell(pfile));
	while( !feof(pfile) ) {
		fscanf(pfile,"%s",cBuf); printf("Ū�� %-8s",cBuf);
		printf("�ثe��m: %2d\n",ftell(pfile));
	}
	fclose(pfile); system("pause"); return(0); // �����ɮ�
}