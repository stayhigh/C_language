#include <stdio.h>
#include <stdlib.h>
int iAbs(int); // �禡���쫬�ŧi
int main(void)
{
	int y = -3;
	printf("-3 ����Ȭ� %d\n", iAbs(y)); // �I�s�禡, �ܼ� y �����e -3 �|�ǹL�h
	system("pause"); return(0);
}
int iAbs(int x)
{
	if( x >= 0 ) return(x);	// �p�G x >= 0 ������, �����^��
	else return(-x);		// x ���t��, �^�� -x
}