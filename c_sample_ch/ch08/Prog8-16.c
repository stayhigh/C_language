#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j; // �~�P���j���ܼ�
	int Item[3][4]; // �x�s�C���ӫ~�|�Ϫ��P��ƶq
	printf("��J�ӫ~���P��q(1:�F��,2:�n��,3:���,4:�_��)\n");
	for( i = 0 ; i < 3 ; i++ ) {
		for( j = 0 ; j < 4 ; j++ ) {
			printf("�� %2d ���ӫ~�b�� %2d �Ϫ��P��q: ",i+1,j+1);
			scanf("%d",Item[i]+j); // Item[i]+j �w�g���V�x�s�Ŷ�����}�A�L�� &
		}
	}
	for( i = 0 ; i < 3 ; i++ ) { // ��X�ӫ~���P��ƶq
		printf("�� %2d ���ӫ~���P��q���O�O:",i+1);
		for( j = 0 ; j < 4 ; j++ ) 	printf("%2d ",*(Item[i]+j));
		printf("\n");
	}
	system("pause"); return(0);
}