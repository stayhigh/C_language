#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y, t; // t �Ω�洫�L�{���Ȧs
	printf("��J��Ӿ�� x �P y : ");
	scanf("%d%d",&x,&y);
	printf("�洫�e: x = %d, y = %d\n",x,y);
	t = x; x = y; y = t; // �洫����ܼƤ��e
	printf("�洫��: x = %d, y = %d\n",x,y);
	system("pause");
	return(0);
}