#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix = 1;
	int iEven, iOdd; 
	iEven = iOdd = 0; /* �p�G���h���ܼƭn�]�w���ۦP���e, �i�H�g���o�� */
	while( ix <= 100 ) 
	{	/* �Q�ΰ��ư� 2 �@�w�l 0, �_�ư� 2 �@�w�l 1 ���ʽ�ӧP�_�_,���� */
		if( ix%2 == 0 )  iEven += ix; // �]�N�O:iEven = iEven + ix;
		else iOdd  += ix; // �]�N�O:iOdd = iOdd + ix;
		ix++; /* ix = ix + 1 */
	}
	printf("����: 2+4...+100=%4d\n",iEven);
	printf("�_��: 1+3...+ 99=%4d\n",iOdd);
	system("pause");
	return 0;
}