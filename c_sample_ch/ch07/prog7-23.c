#include <stdio.h>
#include <stdlib.h>
#define M_PI		3.14159265358979323846
#define M_DEG2RAD	M_PI/180.0	// �w�q�����੷�ת��`��
#define M_RAD2DEG	180.0/M_PI	// �w�q�����ਤ�ת��`��
#define INPUT_ASK	"�п�J�n�ഫ���覡 \
1.����, 2.����\n"  // �r��,�W�L�@��ХH \ �Ӥ��j
#define INPUT_DEGREE "�п�J����: "
#define INPUT_RADIAN "�п�J����: "
#define DEG_SELECT 1 
#define RAD_SELECT 2
int main() {
	int i;
	float x;
	printf(INPUT_ASK); scanf("%d",&i);
	if( i == DEG_SELECT ) {
		printf(INPUT_DEGREE); scanf("%f",&x); 
		printf("�۹��������׬� : %f\n",x*M_DEG2RAD);
	}
	else if ( i == RAD_SELECT ) {
		printf(INPUT_RADIAN); scanf("%f",&x); 
		printf("�۹��������׬� : %f\n",x*M_RAD2DEG);
	}
	system("pause"); return(0);
}