#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int iLower, iUpper, iSpace, iDigit, iPunct;
	iLower = iUpper = iSpace = iDigit = iPunct = 0;
	printf("��J�@�q�^��y�l, �H # �N����\n");
	while ( (ch = getchar()) != '#')	
	{
		if( islower(ch) ) {
			putchar(toupper(ch)); 
			iLower++; /*�p�ƥ[1 */
		}
		else if( isupper(ch) ) { 
			putchar(tolower(ch));
			iUpper++; /*�p�ƥ[1 */
		}
		else{
			if( isdigit(ch) ) iDigit++;	/* �Ʀr�r�� */
			else if( isspace(ch) ) iSpace++;/* �ťզr�� */
			else if( ispunct(ch) ) iPunct++; /* ���I�Ÿ� */
			putchar(ch); /* ��L�r���p���X */
		}
    }
	printf("\n�p�g�^��r����: %4d ��\n",iLower);
	printf("�j�g�^��r����: %4d ��\n",iUpper);
	printf("    �ťզr����: %4d ��\n",iSpace);
	printf("    �Ʀr�r����: %4d ��\n",iDigit);
	printf("    ���I�Ÿ���: %4d ��\n",iPunct);
    system("pause"); return(0);
}