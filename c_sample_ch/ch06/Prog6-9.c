#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
	char ch;
	for( ch = 'A'; ch <= 'Z' ; ch++ ) { /* ch++ �N�O�B�� ch ���x�s���e����, �ӫD�r�� */
		printf("%c = %2d ",ch,ch);
		if( ch%5 == 0 ) printf("\n"); /* �C5����X�@�Ӵ��� */
	}
	system("pause");
	return(0);
}