#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, n;
	int iTotal = 0;	/* �]�w�`�M�� 0 */
	int iStatus;	/* �O�_��J�Ʀr */
	do {
		printf("��J�@�Ӥj�� 1 ����: ");
		iStatus = scanf("%d",&n);
		fflush(stdin); /* �M����J�w�İϪ����e */
	} while( n <= 1 || iStatus == 0 || n%2 == 1 ); /* �N�_�ƯǤJ */
	if( n/2==1 ) printf("�`�M��: 1\n"); /*�� n �� 2 �ɪ�����X 1  */
	else {
		i = 1; /* ��J������, i �q 1 �}�l */
		do { 
			iTotal = iTotal + i + i; /* ���F n/2 ���~, ��L�Ƴ��O�֥[�⦸ */
			i = i + 1;
		} while( i <= n/2 - 1);
		iTotal += n/2; /* n/2 �u�֥[ 1 ��*/
		printf("1+...+%d+...+1 = %d\n",n/2,iTotal);
	}
	system("pause");
	return(0);
}