#include <stdio.h>
#include <stdlib.h>
void Hanoi(int,int,int,int); //�禡�쫬�ŧi
void Hanoi(int n,int s,int m,int d)
{
	if ( n == 1 ) // �פ����
		printf("�N��%2d �Ӷ�L�q��%2d �h���%2d\n",n,s,d);
	else {
		Hanoi(n-1,s,d,m); // �N�W���� n-1 �ӱq�� s �h��� m
		printf("�N��%2d �Ӷ�L�q��%2d �h���%2d\n",n,s,d);
		Hanoi(n-1,m,s,d); // �N�W���� n-1 �ӱq�� m �h��� d
	}
}
int main(void)
{
	int n;
	printf("���h�ֶ�L�n�h: ");
	scanf("%d",&n);
	Hanoi(n,1,2,3); 
	system("pause"); return(0);
}