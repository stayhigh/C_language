#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=1;
	int y=10;
	int *pi = NULL; // �]�w�����ܼƪ���l�Ȭ� 00000000
	printf("Before &x = %p &y = %p pi = %p\n",&x,&y,pi);
	printf("x = %2d  y = %2d\n",x,y);
	pi = &x;		// pi ���V�ܼ� x
	*pi = *pi + 1;	// ���P�� x++
	printf("After *pi=*pi+1: *pi = %2d x = %2d pi = %p\n",*pi,x,pi);
	pi = &y;		// pi ����V�ܼ� y
	*pi = *pi + x;	// ���P�� y = y + x
	printf("After *pi=*pi+x: *pi = %2d y = %2d\n",*pi,y);
	(*pi)++;		// ���P�� y++, ���p�G�g�� *pi++ �|���Ϳ��~
	printf("After   (*pi)++: *pi = %2d x = %2d y = %2d pi = %p\n",*pi,x,y,pi);
	system("pause"); return(0);
}