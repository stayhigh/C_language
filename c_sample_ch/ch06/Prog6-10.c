#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
	float fCent, fFahr; /* �x�s���P�ؤ󪺷ū׭� */
	for( fCent = 35.0f; fCent <= 42.0f ; fCent = fCent + 0.5f ) { 
		fFahr = fCent * 9.0f/5.0f + 32.0f; /* ����ন�ؤ� */
		printf("%5.1f��C = %5.1f��F\n",fCent,fFahr);
	}
	system("pause");
	return(0);
}