#include <stdio.h>
#include <stdlib.h>
void fun1();
int i = 1; // �����ܼ�
int main() {
//	int i = 11; // �ϰ��ܼ�
	if( i == 11 ) {
		int i = 111;
		printf("i = %d in if\n",i); // �ϥβ� 8 ��ŧi���ܼ� i
	}
	else {
		i++; printf("i = %d\n",i); // �ϥβ� 6 ��ŧi���ܼ� i
	}
	fun1(); 
	printf("i = %d in main\n",i); // �ϥβ� 6 ��ŧi���ܼ� i
	system("pause"); return(0);
}
void fun1() 
{
	i++; // �ϥβ� 4 ��ŧi���ܼ� i
	printf("i = %d in fun1\n",i);
}