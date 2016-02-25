#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = {23,31,3,19,54,12};
	int i, j, t;
	int iSwitch; // 綟计秈︽が传砞﹚
	for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]);
	printf("\n");
	do {
		iSwitch = 0; // 安砞綟计⊿Τが传
		for( i = 0 ; i < 5 ; i++ ) { // 浪跌玡 n-1 计
			if( A[i] > A[i+1] ) { // 抖岿粇,惠ユ传
				t = A[i]; A[i] = A[i+1]; A[i+1] = t; // 綟计が传
				iSwitch = 1; // 綟计Τが传
			}
		}
		for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]); // 块ヘ玡逼挡狦
		printf("\n");
	} while( iSwitch ); // 讽綟计Τユ传,ゲ斗秈︽Ω浪琩
	system("pause"); return (0);
}
