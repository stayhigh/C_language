#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *pfin, *pfout;
	char ch;  // �x�sŪ�����r��
	pfin  = fopen("story.txt","r");
	pfout = fopen("styout.txt","w");
	if (pfin == NULL || pfout == NULL) {
		printf("�ɮ׶}�ҥ���\n"); system("pause");return(0);
	}
	while( !feof(pfin) ) {
		ch = fgetc(pfin); fputc(ch,pfout); // Ū���@�Ӧr���N�g�X�@�Ӧr��
	}
	fclose(pfin); fclose(pfout); system("pause"); return(0);
}