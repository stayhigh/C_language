#include <iostream>
#include <cstdlib>
#include <fstream>	// ���J�w�q�ɮ׾ާ@�����Y��
using namespace std;
int main(void)
{
	ofstream outfile;	// �ŧi�@�ӥi�H��X�ɮת�����
	outfile.open("myfirst.txt",ios::out);
	if( !outfile.is_open() ) { // �ɮ׶}�ҥ��Ѯ�, �����פ���ɮת��s��
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	outfile << "�ڪ��Ĥ@��C++�ɮ�" << endl; // �N��ƾɵ��ɮת���
	outfile.close(); // �����ɮ� 
	system("pause"); return(0);
}