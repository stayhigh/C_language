#include <stdio.h>
#include <stdlib.h>
long Factor(long);  /* �����p��禡 Factor ���쫬�ŧi */
long Factor(long n) /* �w�q�p�ⶥ�����禡*/
{
	long ret; // �x�s���������G,�w�]�� 1
	if( n == 1 ) return(1); // �פ�I�s������, ���]�I�s�ɤ޼Ƥ��e�@�w >=1
	ret = n * Factor(n-1);   
	return(ret); 
}
int main(void)
{
	int n;        /* ����������*/
	printf("�p��n ��������, �п�Jn ����\n");
	scanf("%d",&n);
	printf("%2d! = %d\n",n, Factor(n));  
	system("pause"); return(0);
}