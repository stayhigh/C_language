#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	double	da = 3.1415;
	float	fb = 3.1415f;
	int		iArray[] = {3,5,7};
	fstream fileobj;	// �ŧi�@�ӥi�H�s���ɮת�����	
	fileobj.open("number.bin", ios::binary | ios::out );
	if( !fileobj.is_open() ) { // .bin �@��Ω��ܬ��G�i����
		printf("number.bin �ɮ׵L�k�}��"); system("pause"); return(0); 
	} 
	fileobj.write((char*)&da, sizeof(double));// �g�J�ܼ�da�b�O���餤���x�s���e
	fileobj.write((char*)&fb, sizeof(float)); // �g�J�ܼ�fb�b�O���餤���x�s���e
	fileobj.write((char*)iArray, sizeof(int)*3); //�g�J�}�C iArray ���x�s���e
	fileobj.close(); // �����ɮ�
	system("pause"); return(0); 
}