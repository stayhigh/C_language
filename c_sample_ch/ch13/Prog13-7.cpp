#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class CMouse 
{
private:
	int m_ix, m_iy;		// �ѹ����_�l��m
	char m_cIcon;		
public:
	CMouse(int x=1, int y=1, char Icon='@'): m_ix(x), m_iy(y), m_cIcon(Icon) {
	}
	bool Compare(CMouse mouseT) {
		if( this->m_ix == mouseT.m_ix ) return(true);
		else return(false);
	}
};
int main(void)
{
	CMouse mX(5,3,'#'); 
	CMouse mY(1,2);	
	if( mX.Compare(mY) ) cout << "mX �P mY �b�P�@�����u�W" << endl;
	else cout << "mX �P mY ���b�P�@�����u�W" << endl;
	system("pause"); return(0);
}