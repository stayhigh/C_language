#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int iX = 65432, iY = 100, iZ = -245;
	printf("%10d �� 8 �i��:%#10o, 16�i��:%#10x\n",iX,iX,iX);
	printf("%10.6d �� 8 �i��:%#10.6o, 16�i��:%#10.6x\n",iX,iX,iX);
	printf("1234567890\n");//�������ܦ�m�Ӥw
	printf("%-10d\n",iY); // �V�����,�Ʀr�e���|���ťթάO�ɹs
	printf("%-10d\n",iZ); // �V�����,�Ʀr�e���|���ťթάO�ɹs
	printf("%10d\n",iY);  // �V�k���,�e���ɪť�
	printf("%10d\n",iZ);  // �V�k���,�e���ɪť�
	printf("%010d\n",iY);  // �V�k���,�e����0
	printf("%010d\n",iZ);  // �V�k���,�e����0
	printf("%+10d\n",iY);  // ��X���t��,�V�k���,�e���ɪť�
	printf("%+10d\n",iZ);  // ��X���t��,�V�k���,�e���ɪť�
	printf("% 010d\n",iY);  // �����H�ťը��N,�V�k���,�e����0
	printf("% 010d\n",iZ);  // �����H�ťը��N,�V�k���,�e����0
	printf("% 10.4d\n",iY); // �@�w�n��X 4 �Ӧr��
	printf("% 10.4d\n",iZ); // �@�w�n��X 4 �Ӧr��
	system("pause");
	return(0);
}
