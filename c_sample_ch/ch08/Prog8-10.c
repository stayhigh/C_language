#include <stdio.h>
#include <stdlib.h>
void Sum(int, int *);  // �쫬�ŧi,�޼Ƭ������ܼƥ����P�ɫO�d * ��
void Sum(int n, int *result) 
{
	int i, m=0;
	for( i = 1 ; i <= n ; i++ ) m += i;
	*result = m; // �N�p�⵲�G�x�s�� result ��
} 
int main(void)   
{   
	int n, total;
	printf("��J n = "); scanf("%d",&n);
	Sum(n, &total); // �I�s Sum, &total �N���ȶǻ��L�h
	printf("1+2+...+%d = %d\n",n,total);
	system("pause"); return (0);   
 }   