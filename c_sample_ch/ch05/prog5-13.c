#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix = 1;
	int iEven, iOdd; 
	iEven = iOdd = 0; /* �p�G���h���ܼƭn�]�w���ۦP���e, �i�H�g���o�� */
	while( ix <= 100 ) 
	{	
		switch(ix%2) {/* 0 ������, 1 ���_�� */
			case 0:
				iEven = iEven + ix;	/* ���Ʋ֥[ */
				break;
			case 1:
				iOdd = iOdd + ix;	/* �_�Ʋ֥[ */
				break;
		}
		ix++; /* ix = ix + 1 */
	}
	printf("����: 2+4...+100=%4d\n",iEven);
	printf("�_��: 1+3...+ 99=%4d\n",iOdd);
	system("pause");
	return 0;
}