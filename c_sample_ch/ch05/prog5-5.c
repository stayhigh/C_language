#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '		/* �Q�� #define �w�q�ťզr�����`�ƦW�� */
int main(void)
{
	char ch;
	while ( (ch = getchar()) != '\n')	/* Ū���r����i�洫��r�����P�_ */
	{
		if (ch == SPACE) putchar(ch); /* �ť��䤣�B�z*/  
		else  putchar(ch + 12);	/* ��L���r���A�N�� ASCII �s�X�[ 12 ���X */
    }
    putchar(ch);	/* ��X�̫᪺����r�� */
    system("pause");
	return 0;
}
