#include <stdio.h>
#include <stdlib.h>
void ShowChar(char, int);
#define HEIGHT 7 // �w�q�n��X�٧Ϊ�����
void ShowChar(char ch, int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) printf("%c",ch);
}
int main(void)
{
	int i;
	int iNum[7] = {1,3,5,7,5,3,1};
	for( i = 0 ; i < 7 ; i++ ) {
		ShowChar(32,HEIGHT-(iNum[i]+1)/2); // ��X�e�����n���ť�
		ShowChar(48+i,iNum[i]); // �C�����O��@�� iNum[i] �����e�ǻ���禡��
		printf("\n");   // �C���X����,�n����
	}
    system("pause"); return(0);
}