#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	int ia, ie, ii, io, iu, is;
	ia = ie = ii = io = iu = is = 0;
	printf("��J�@�q�^��y�l, �H # �N����\n");
	while ( (ch = getchar()) != '#')	/* Ū���r����i�洫��r�����P�_ */
	{
		switch(ch) {
			case 'a': /* ���� a, �L�פj�p�g���� */
			case 'A':
				ia++; break;
			case 'e': /* ���� e, �L�פj�p�g���� */
			case 'E':
				ie++; break;
			case 'i': /* ���� i, �L�פj�p�g���� */
			case 'I':
				ii++; break;
			case 'o': /* ���� o, �L�פj�p�g���� */
			case 'O':
				io++; break;
			case 'u': /* ���� u, �L�פj�p�g���� */
			case 'U':
				iu++; break;
			case ' ': /* �ťզr�� */
				is++; break;
		}
    }
	printf("�����P�ťզU��:   A    E    I    O    U  �ť�\n");
	printf("               %4d %4d %4d %4d %4d %4d\n",ia,ie,ii,io,iu,is);
    system("pause");
    return(0);
}
