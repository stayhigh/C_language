#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  NUM 5    // �w�q��J����r�q
int main()
{
	char cWord[NUM][10];// �ŧi 5x10 ���G���r���}�C
	char *pcW[NUM];	// ���V cWord �C�@�� row
	char *pc;		// �Ω�洫 pcW ���e���Ȧs�ܼ�
	int  i, j, min;
	printf("�Ш̧ǿ�J��J%d�ӳ�r\n",NUM);
	for (i = 0 ; i < NUM; i++) {
		printf("�� %d ��:",i+1);
		gets(cWord[i]);  // ���o��J����r
		pcW[i] = cWord[i]; // �]�w���V�� i row
	}
	for( i = 0 ; i < NUM-1 ; i++ ) {
		min = i; /*���]�ثe�̤p cWord[min] */
		for( j = i+1 ; j < NUM ; j++ ) 
			if( strcmp(pcW[min],pcW[j]) > 0 ) min = j; // �O�U�̤p�ƪ����ޭ�
		pc = pcW[i]; pcW[i] = pcW[min]; pcW[min] = pc; // �洫�ҫ��V����}
	}
	printf("�Ƨǫ�\n");
	for (i=0; i<NUM; i++) /* ��X�Ƨǫᵲ�G���j��*/
		printf("�� %d ��: %s\n",i+1, pcW[i]); // �Q�� pcW[i] �����V�ӿ�X
	system("pause"); return(0);
}