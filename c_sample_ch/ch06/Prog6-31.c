#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define ROW 12 // �w�q�C�Ʊ`��
#define COL 10 // �w�q��Ʊ`��
int main(void)
{
	int i, j;
	int TimeTable[ROW][COL];
	for( i = 0; i <  ROW ; i++ )
		for( j = 0; j <  COL ; j++ ) 
			TimeTable[i][j] = (i+1)*(j+1); // �p����x�s�E�E���k�����e
	printf("   *"); /* ��X�Ĥ@�檺*/
	for( j = 1; j <= COL ; j++ ) printf("%4d",j);
	printf("\n");
	for( i = 1; i <= ROW ; i++ ) {
		printf("%4d",i);
		for( j = 1; j <= COL ; j++ ) {
			printf("%4d",TimeTable[i-1][j-1]); /*��X TimeTable �����e */
			Sleep(50); /* �Ȱ� 0.05 �� */
		}
		printf("\n");
		Sleep(200); /* �Ȱ� 0.2 �� */
	}
	system("pause"); return(0);
}