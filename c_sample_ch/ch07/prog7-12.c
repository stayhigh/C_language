#include <stdio.h>
#include <stdlib.h>
double Power(double, int);	// Power �禡���쫬�ŧi
double Factor(int);		// Factor �禡���쫬�ŧi
double dCos(double);		// dCos �禡���쫬�ŧi
double Factor(int n) { // �p�� n!
	int i;
	double ret=1.0f;
	for( i = 1 ; i <= n ; i++ ) ret = ret * (double)i;
	return(ret);
}
double Power(double x, int n) { // �p�� x^n
	int i;
	double ret=1.0f;
	for( i = 1 ; i <= n ; i++ ) ret = ret * x;
	return(ret);
}
double dCos(double angle) {
	int i, Sign=-1; // ����ϥ� Sign = -Sign �i�� Sign �b +1 �P -1 ��������
	double ret=1.0;
	for( i = 2; i <= 16 ; i+=2 ) { // �C���֥[ 2, ���B�ȭp��e 8 �����X
		ret += (double)Sign*Power(angle,i)/Factor(i); //�p�� cos ���G���
		Sign = -Sign; 
	}
	return(ret);
}
int main(void)
{
	printf("Cos(30) = %f\n",dCos(3.1415926/6.0));
    system("pause"); return(0);
}