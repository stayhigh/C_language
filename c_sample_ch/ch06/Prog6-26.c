#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i, ilength; /* ilength: ��J�r�ꪺ���� */
	char str1[20]; /* ������J���r�� */
	do {
		printf("��J�@�Ӧr��: ");
		scanf("%s",str1); 
		ilength = strlen(str1); /* �p��r����� */
		printf("�Ӧr�ꪺ�ϦV: ");
		for( i = ilength-1; i >= 0 ; i-- )  /* �ϦV��J�C�@�Ӧr�� */
			putchar(str1[i]);
		printf("\n");
	} while( ilength > 1 ); /* ��J�W�L�@�Ӧr���~�|�~�� */
	system("pause");
	return(0);
}
