#include <stdio.h>
#include <stdlib.h>
#include <math.h>	// ���J�ƾǨ禡���Y��
int main(void) 
{
	int x;   /*�x�s���a��J�������O */
	float t; /*��Ǫ����ˮ`�� */
	printf("��J�����O�G");
	scanf("%d",&x); /* �����ϥΪ̪���J */
	t = pow(x,1.5)*2.0 - sqrt(10.0) * 25;
	printf("��Ǫ����ˮ`�Ȭ�:%f \n", t);
	system("pause");
	return(0);
}