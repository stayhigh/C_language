#include <stdio.h>
#include <stdlib.h>
void staticA();
void normalB();
void staticA() {
	static int a = 0; // 靜態變數 a, 這一行無法設定中斷點
	printf("a = %3d ",a);
	a += 1;
}
void normalB() {
	int b = 0; // 一般的變數 b
	printf("b = %3d\n",b);
	b += 1;
}
int main(){
	int i;
	for( i = 0 ; i < 10 ; i++ ) {
		staticA();
		normalB();
	}
	system("pause"); return(0);
}