#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
	float fCent, fFahr; /* 儲存攝氏與華氏的溫度值 */
	for( fCent = 35.0f; fCent <= 42.0f ; fCent = fCent + 0.5f ) { 
		fFahr = fCent * 9.0f/5.0f + 32.0f; /* 攝氏轉成華氏 */
		printf("%5.1f度C = %5.1f度F\n",fCent,fFahr);
	}
	system("pause");
	return(0);
}