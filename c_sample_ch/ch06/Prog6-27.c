#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i, ilength; /* ilength: ��J�r�ꪺ���� */
	char str1[20], str2[20]; /* �����P�t�d��X�r�� */
	do {
		printf("��J�@�Ӧr��: ");
		scanf("%s",str1); 
		ilength = strlen(str1); /* �p��r����� */
		printf("�Ӧr�ꪺ�ϦV: ");
		for( i = 0; i <= ilength - 1 ; i-- )  
			str2[i] = str1[ilength-1-i] /* �ϦV�N�r���h�� str2 */
		str2[ilength] ='\0'; /* �̫�ɤW�@�� null �r�� */
		printf("%s\n",str2);
	} while( ilength > 1 ); /* ��J�W�L�@�Ӧr���~�|�~�� */
	system("pause");
	return(0);
}