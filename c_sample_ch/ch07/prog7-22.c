#include <stdio.h>
#include <stdlib.h>
void staticA();
void normalB();
void staticA() {
	static int a = 0; // �R�A�ܼ� a, �o�@��L�k�]�w���_�I
	printf("a = %3d ",a);
	a += 1;
}
void normalB() {
	int b = 0; // �@�몺�ܼ� b
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