#include <stdio.h>
#include <stdlib.h>
void ShowChar(char, int); // �禡���쫬�ŧi
#define HEIGHT 7	// �w�q�n��X�����r�𰪫�
int main(void)
{
	int i;
	for( i = 0; i < HEIGHT; i++ ) {
		ShowChar(32,HEIGHT-i-1); // �e��������X�ť�
		ShowChar(65+i,i*2+1); //��X���r���ƨ̧Ǭ�: 1,3,5,...
		printf("\n"); // �C���X����,�n����
	}
	system("pause"); return(0);
}
void ShowChar(char ch, int n)
{
	int i;
	for( i = 0 ; i < n ; i++ ) printf("%c",ch);
}