#include <stdio.h>
#include <stdlib.h>
void XPrint(int n)
{
	int i = 1;
	while(i <= n )	/* i <= n �u�n�������|�������j�� */
	{
		printf("*");/* �L�X�@�� * �� */
		i++;		/* i �����e���W 1, �]�N�O i = i + 1*/
	}
	printf("\n");	/* ��X�@�Ӵ���Ÿ� */
}
int main(void)
{
	int ix;
	printf("�п�J�n�L�X�� * �Ӽ�:");
	scanf("%d",&ix);
	XPrint(ix);		/*�I�s XPrint �禡,�]�w id���޼� */
	system("pause");
	return 0;
}