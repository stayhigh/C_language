#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '		/* �Q�� #define �w�q�ťզr�����`�ƦW�� */
int main(void)
{
	char ch;
	ch = getchar();		/* Ū���r�� */
	while (ch != '\n')	/* �O�_Ū�촫��r�� */
	{
		if (ch == SPACE) putchar(ch); /* �ť��䤣�B�z*/  
		else  putchar(ch + 12);	/* ��L���r���A�N�� ASCII �s�X�[ 12 ���X */
		ch = getchar();		/* �W���U�@�Ӧr�� */
    }
    putchar(ch);	/* ��X�̫᪺����r�� */
    system("pause");
	return 0;
}
