#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*�]�w�}�C����l��*/
	int i, j, k, t;
	for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]);
	printf("\n%4d\n",A[0]);
	for( i = 1; i < 6 ; i++ ) {
		j = 0; t = A[i]; //�O�d�ثeŪ������
		while( t > A[j] && j < i ) j++; // j �N�������Ӵ��J����m 
		if( j != i ) {  // ���J����m�N�O�ثeŪ������m�N�L������h���ާ@
			for( k = i ; k > j ; k--) A[k] = A[k-1]; // �C�@�ӼƳ�����h�@��
			A[j] = t; // �N�ثeŪ�����ƴ��J���w����m
		}
		for( k = 0; k <= i ; k++ ) printf("%4d",A[k]); // ��X�ثe���Ƨǵ��G
		printf("\n");
	}
	system("pause");
	return(0);
}