#include <stdio.h>
#include <stdlib.h>
double Power(double, int);	// Power 函式的原型宣告
double Factor(int);		// Factor 函式的原型宣告
double dCos(double);		// dCos 函式的原型宣告
double Factor(int n) { // 計算 n!
	int i;
	double ret=1.0f;
	for( i = 1 ; i <= n ; i++ ) ret = ret * (double)i;
	return(ret);
}
double Power(double x, int n) { // 計算 x^n
	int i;
	double ret=1.0f;
	for( i = 1 ; i <= n ; i++ ) ret = ret * x;
	return(ret);
}
double dCos(double angle) {
	int i, Sign=-1; // 後續使用 Sign = -Sign 可讓 Sign 在 +1 與 -1 之間切換
	double ret=1.0;
	for( i = 2; i <= 16 ; i+=2 ) { // 每次累加 2, 此處僅計算前 8 項的合
		ret += (double)Sign*Power(angle,i)/Factor(i); //計算 cos 的逼近值
		Sign = -Sign; 
	}
	return(ret);
}
int main(void)
{
	printf("Cos(30) = %f\n",dCos(3.1415926/6.0));
    system("pause"); return(0);
}