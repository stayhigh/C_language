#include <stdio.h>
int* Sum(int);  // �쫬�ŧi, �^�ǭȬ� int ���O����}
int* Sum(int n) // �^�ǭȬ���}, �ҥH�b��ƫ��O��[�W *
{
	int i, m=0;
	for( i = 1 ; i <= n ; i++ ) m += i;
	return(&m); // �Ǧ^ m ������
} 
int main(void)   
{   
	int n, *total;
	printf("��J n = "); scanf("%d",&n);
	total = Sum(n); // �I�s Sum, total �����^�Ǫ���}
	printf("1+2+...+%d = %d\n",n,total);
	system("pause"); return (0);   
}   