#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
void swap(int *a,int *b) // �洫 a �P b �ҫ��V�ܼƪ����e
{
	int t;
	t=*a; *a=*b; *b=t;
}
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*�]�w�}�C����l��*/
	int i, j, min;
	int *piA = A; // �]�w piA ���V�}�CA���}�Y
	for( j = 0; j < 6 ; j++ ) printf("%4d",*(piA+j));
	printf("\n");
	for( i = 0 ; i < 5 ; i++ ) {
		min = i; /*���]�ثe�̤p�ƬOA[min] */
		for( j = i+1 ; j < 6 ; j++ ) 
			if( *(piA+min) > *(piA+j) ) min = j; // �O�U�̤p�ƪ����ޭ�
		swap(piA+i,piA+min); // �洫 A[min] �P A[i] �����e
		for( j = 0; j < 6; j++ ) printf("%4d",A[j]);
		printf("\n");
	}
	system("pause"); return (0);
}