#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iGrade;
	printf("�п�J���Z: "); scanf("%d",&iGrade);
	if (iGrade>=90)			/* grade �Ȥj�󵥩� 90*/
		printf("�u��!!\n"); /* ���u, ��X���G*/
	else if (iGrade>=80)	/* ����, �A�P�_ grade �j�󵥩� 80 �O�_���u*/
		printf("�ҵ�!!\n");	/* ���u, ��X���G*/
	else if (iGrade>=70)	/* ����, �A�P�_grade �j�󵥩� 70 �O�_���u*/
		printf("�A��!!\n"); /* ���u, ��X���G*/
	else if (iGrade>=60)	/* ����, �A�P�_grade �j�󵥩�60 �O�_���u*/
		printf("����!!\n");	/* ���u, ��X���G*/
	else
		printf("�B��!!\n");	/* ����, ��X���G*/
	system("pause"); 
	return 0;
}
