/*�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w
time.h �]�t�H�U���Ϊ��ɶ��w�q

���c tm,�w�q�p�U
struct tm {
        int tm_sec;     // �ثe�ɨ誺���
        int tm_min;     // �ثe�ɨ誺������
        int tm_hour;    // �ثe�ɨ誺�p�ɼ�
        int tm_mday;    // ���ѬO���몺�ĴX��
        int tm_mon;     // ���ѬO���~���ĴX�Ӥ�
        int tm_year;    // ���ѬO�q 1990 �~���᪺�ĴX�~
        int tm_wday;    // ���ѱq�g���ثe����ĴX�� 0��6
        int tm_yday;    // ���ѬO�q1��1���ثe����ĴX�� 0-365
        int tm_isdst;   // �O�_�p�����`���ɶ����X��
        };

time()�禡�G�Ǧ^�q1970 �~ 1 �� 1 �� 0 �� 0 �� 0 ���_,�@����ثe����`���
	��I�s time �禡�ɡA�p�G�H�ǧ}�I�s���覡�A�ǤJ�޼ơA���O�O�w�q�b time.h ���� time_t ���O�]��ڤW�����O�O long�^
	�h�Ӥ޼ƤW�z���`��Ʒ|�x�s�b�Ӥ޼Ƥ��C
	�p�H�U���{���X�G
	time_t curtime;   
	time(&curtime); �`��Ʒ|�x�s�b curtime ��
localtime() �禡�G�i�H�N�W�z���`��ơA�ন tm ���c����ƫ��A�Ǧ^
	�p�H�U���{���X�G
	struct tm *pTime;
	pTime = localtime(&curtime); �ثe���`��Ʒ|�ন tm �����c
	�z�L pTime->tm_sec�BpTime->tm_min�BpTime->tm_hour �N�i�H���o�ثe����ơB���ƻP�p�ɼ�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	time_t curtime;		// ���o�`��ƪ��ܼ�
	struct tm *pTime;   // ���o�`����ন tm ���c���ɶ�
	while( 1 ) {        // �L�a�j��
		time(&curtime); // ���o 1970 �~�����ܤ����`���
		pTime = localtime(&curtime); /* �ഫ��tm �榡*/
		printf("%d:%d:%d\n",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
		system("cls");       /* �M���ù�*/
	}
	system("pause");return(0);
}
