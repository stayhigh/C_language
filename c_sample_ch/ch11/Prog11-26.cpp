#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(void)
{
	double	da;
	float	fb;
	int		iArray[3];
	fstream fileobj;	// �ŧi�@�ӥi�H�s���ɮת�����	
	fileobj.open("number.bin", ios::binary | ios::in );
	if( !fileobj.is_open() ) { 
		printf("number.bin �ɮ׵L�k�}��"); system("pause"); return(0); 
	} 
	fileobj.read((char*)&da, sizeof(double));// Ū���ܼ� da �����e
	fileobj.read((char*)&fb, sizeof(float)); // Ū���ܼ� fb �����e
	fileobj.read((char*)iArray, sizeof(int)*3); //Ū���}�C iArray �����e
	fileobj.close(); // �����ɮ�
	cout << "da = " << da << endl;
	cout << "fb = " << fb << endl;
	for(int i = 0; i < 3; i++)
		cout << "iArray[" << i << "] = " << iArray[i] << endl;
	system("pause"); return(0); 
}