#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = {23,31,3,19,54,12};
	int i, j, t;
	int iSwitch; // �۾F�ƶi�椬�����]�w
	for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]);
	printf("\n");
	do {
		iSwitch = 0; // �����]�۾F�ƨS������
		for( i = 0 ; i < 5 ; i++ ) { // �˵���e n-1 �ӼƧY�i
			if( A[i] > A[i+1] ) { // ���ǿ��~,�ݥ洫
				t = A[i]; A[i] = A[i+1]; A[i+1] = t; // �۾F�Ƥ���
				iSwitch = 1; // �F�Ʀ�����
			}
		}
		for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]); // ��X�ثe�ƧǪ����G
		printf("\n");
	} while( iSwitch ); // ��۾F�Ʀ��洫��,�����i��U�@�����ˬd
	system("pause"); return (0);
}
