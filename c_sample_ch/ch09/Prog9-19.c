#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union Paid	{	// �ŧi�@�P�Ŷ� paid
	char cCreditCard[17]; // �x�s�H�Υd���X
	int  iCash;	     // �x�s�{��
} money;
int main(void)
{
	int iAmt=1500, iOpt; // �w�]���I���B�� 1500
	printf("���I���B��: %d\n",iAmt);
	do {
		printf("��ܥI�ڤ覡-1(�H�Υd) 2(�{��) : ");
		scanf("%d",&iOpt);
		if ( iOpt == 1 ) { /* ��ܥI�ڤ覡*/
			printf("�п�J�z���d��: "); scanf("%s",money.cCreditCard);
			if(strlen(money.cCreditCard) != 16) { 
				printf("�d�����~!�Э��s�ާ@!\n"); 
				iOpt = 0; // �� while �j��i�H�~�����
			}
			else printf("���ڦ��\!!\n");
		}
		else if ( iOpt == 2 ) {
			printf("�п�J�{�����B: "); scanf("%d",&money.iCash);
			if ( money.iCash < iAmt ) { 
				printf("���B����!�Э��s�ާ@!\n");
				iOpt = 0; // �� while �j��i�H�~�����
			}
			else printf("������\!��z %3d ��\n",money.iCash-iAmt);
		}
		else { printf("�п�J���T���I�ڤ覡\n"); }
	} while( iOpt != 1 && iOpt != 2 ) ;
	system("pause"); return(0);
}