#include <stdio.h>
#include <stdlib.h>
#define NUM_PER_LINE 6
int main(void)
{
	int i, j, halfi;
	int flag;  /*1 ��ܸӼƬO���, 0 ��ܸӼƤ��O���*/
	int num = 0; /* �ثe�D�o����ƭӼ�*/
	for(i = 2; i<= 100 ;i++)  /* �~�h�j�鱱��Q����*/
	{
		flag = 1; halfi = i/2; /*�����]�ӼƬ����*/
		for (j = 2 ; j <= halfi ; j++) 
		{
			if (i%j == 0) 
			{
				flag = 0; break; /* ���O���*/
			}
		}
		if( flag )
		{ /* �O���*/
			printf("%3d ",i);
			num++; 
			if (num%NUM_PER_LINE == 0)  printf("\n");
		}
	}
	system("pause");
	return 0;
}