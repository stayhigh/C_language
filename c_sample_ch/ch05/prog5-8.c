#include <stdio.h>
#include <stdlib.h>
#define SPACE ' ' 
int main(void)
{
	char ch;
	while ( (ch = getchar()) != '\n')	/* Ū���r����i�洫��r�����P�_ */
	{
		if(ch >= 65 && ch <= 90) putchar(ch+32); /*�j�g�ܤp�g*/
		else if(ch >= 97 && ch <= 122) putchar(ch-32); /*�p�g�ܤj�g*/
		else if (ch == SPACE) putchar('*'); /* �ť����ܦ�**/  
    }
    putchar(ch);	/* ��X�̫᪺����r�� */
    system("pause"); return 0;
}