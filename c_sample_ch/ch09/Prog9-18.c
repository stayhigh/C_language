#include <stdio.h>
#include <stdlib.h>
union Paid { // �@�P�Ŷ����ŧi
	char  cCreditCard[21];
	char  cBankAccount[16];
	int   iCash;
}; 
int main(void)
{
	union Paid money; // �H Paid �ӫŧi�ܼ�
	printf("sizeof(union Paid) = %2d\n",sizeof(union Paid)); // �H4�Ӧ줸�լ����
	printf("�п�J�Ȧ�b��:   "); scanf("%s",money.cBankAccount);
	printf("�Ȧ�b��:   %s\n",money.cBankAccount);
	printf("�п�J�H�Υd���X: "); scanf("%s",money.cCreditCard);
	printf("�H�Υd���X: %s\n",money.cCreditCard);
	printf("�п�J�{�����B: "); scanf("%d",&money.iCash);
	printf("�{�����B:   %4d\n",money.iCash);
	printf("�H�Υd���X: %s\n",money.cCreditCard); // �N��X�_�Ǫ��T��
	system("pause"); return(0);
}