#include <stdio.h>
#include <stdlib.h>
int IsPrime(int);
int main(void)
{
	int i;
	printf("1 �� 10000 ������Ʀ�:\n");
	for( i = 1; i <= 10000 ; i++ ) 
		if( IsPrime(i) ) printf("%5d",i);
	printf("\n");
	system("pause"); return(0);
}
int IsPrime(int iP) 
{
	int ix = 2; // ix �q 2 �}�l
	if( iP <= 1 ) return(0); // �׶}�p��(�t) 1 �H�U����
	while( ix*ix <= iP ) // �u�ݭn�����ڸ�(iP)�Y�i
	{
		if( !(iP%ix) ) return(0);// �o�{�]��, �o�ӼƤ��O���
		ix++; // ix ���W 1
    }
	return(1); // �L�{�����o�{�]��,�ҥH�o�ӼƬ����
}