#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE *pfin, *pfout;
	char cBuf[30];
	pfin  = fopen("story.txt","r");
	pfout = fopen("upperout.txt","w");
	if (pfin == NULL || pfout == NULL) {
		printf("�ɮ׶}�ҥ���\n");
		system("pause");return(0);
	}
	while( !feof(pfin) ) {
		if( fscanf(pfin,"%s",cBuf) != EOF ) {
			cBuf[0] = toupper(cBuf[0]);  // �Ĥ@�Ӧr���ܦ��j�g
			fprintf(pfout,"%s ",cBuf); // �g�J pfout
		}
	}
	fclose(pfin); fclose(pfout);
	system("pause"); return(0);
}