#include <stdio.h>
#include <stdlib.h>
//void XPrint(int); // �禡�쫬�ŧi
int main(void)
{
	XPrint(10); // �I�s��
	system("pause"); return (0);
}
void XPrint(int n)
{
	int i;
	for( i=0; i<n; i++) printf("*");
	printf("\n");
}