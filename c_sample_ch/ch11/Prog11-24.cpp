#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
struct StuInfo {
	int	 iID;
	char cName[10];
	char cBirthday[10];
};
int main(void)
{
	fstream fileobj;	// �ŧi�@�ӥi�H�s���ɮת�����	
	struct StuInfo stu[5];
	int iNum, i = 0; //stu �����ޭ�
	fileobj.open("stuinfo.txt",ios::in);
	if( !fileobj.is_open() ) { // �ɮ׶}�ҥ���
		cout << "�ɮ׵L�k�}��"; system("pause"); return(0); 
	}
	while( !fileobj.eof() ) {
		fileobj >> stu[i].iID;			// Ū���Ǹ�
		fileobj >> stu[i].cName;		// Ū���m�W
		fileobj >> stu[i].cBirthday;	// Ū���ͤ�
		i++;
	}
	iNum = i; printf("�Ǹ�   �m�W    �ͤ�\n");
	for( i = 0 ; i < iNum ; i++ )
		cout<<stu[i].iID<<"  "<<stu[i].cName<<"  "<<stu[i].cBirthday<<endl;
	fileobj.close(); system("pause"); return(0); // �����ɮ�
}