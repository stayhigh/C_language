#include <stdio.h>
#include <stdlib.h>
float StdWeight(float,int); //�쫬�w�q,�Ĥ@�Ӥ޼Ƭ�����
int main(void)
{
	int sex,height;	// sex �O�ʧO�ﶵ�ܼ�, height �O����
	float weight;	// �p�⵲�G���魫��

	printf("�ʧO (0)�k(1)�k :");
	scanf("%d",&sex); //�o�̨S���ˬd��J�ȡA�w�]��J���O0�N�O1 
	printf("�п�J����(����): ");
	scanf("%d",&height);
	weight = StdWeight(height,sex);
	printf("�z���z�Q�魫�O %4.1f ����\n", weight);
	system("pause"); return(0);
}
float StdWeight(float h,int s) // �z�Q�魫���p��禡
{
	float ret;
	if (s == 0) ret = (h - 70) * 0.6;
	else ret = (h - 80) * 0.7;
	return(ret);
}
