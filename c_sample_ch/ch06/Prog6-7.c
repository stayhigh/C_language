#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i,iCount=0; /* iCount:�O�� 3 �X�{������ */
	srand((unsigned)time(NULL)); // �]�w�üƲ��;����_�l��
	for(i = 1; i<=50000 ; i++)
		if( (rand()%6+1) == 3 )	/* ���üƷ��Y��l*/
			iCount++;		/* ���l�� 3 �I��, iCount+1 */
	printf("��l�X�{ 3 �I�����Ʀ� %d ��\n",iCount);
	printf("���v�� %.3f\n",(float)iCount/50000);
	system("pause");
	return(0);
}