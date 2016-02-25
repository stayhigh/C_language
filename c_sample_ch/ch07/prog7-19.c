#include <stdio.h>
#include <stdlib.h>
int x = 11; // 办跑计, 场跑计
void fun1();
int main() {
	int i = 1; // 跋办跑计, ず场跑计
	printf("x = %d, i = %d\n",x,i);
	if( i == 1 ) {
		int j = 2;
		printf("x = %d, i = %d, j = %d\n",x,i,j);
	}
	else {
		int k = 3; printf("x = %d, i = %d, k = %d\n",x,i,k);
	}
	fun1(); x++; i--;
	printf("x = %d, i = %d\n",x,i);
//	printf("i = %d, j = %d, k = %d, y = %d\n",i,j,k,y);
	system("pause"); return(0);
}
int y = 12; // 跋办跑计, 场跑计
void fun1() {
	int z = 13;
	printf("x = %d, y = %d, z = %d in fun1\n",x,y,z);
}