#include <stdio.h>
#include <stdlib.h> 
#include <windows.h> /* for Sleep �禡 */ 
int main(void)
{
	int i;
	for( i = 5; i >= 0 ; i-- ) {
		printf("�ѤU %d ��\n",i);
		Sleep(1000); /* ���{���Ȱ� 1 �� */
	}
	printf("�ɶ���\n");
	system("pause");
	return(0);
}