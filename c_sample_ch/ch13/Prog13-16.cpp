#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_ix, m_iy;	// 老鼠的座標
public:
	CMouse(int ix=0, int iy=0) { m_ix = ix; m_iy = iy;} // 設定老鼠的位置
	bool operator>(CMouse &mouse) { // 提供物件 > 物件的比較
		int d1, d2;
		d1 = this->m_ix*this->m_ix+this->m_iy*this->m_iy;
		d2 = mouse.m_ix*mouse.m_ix+mouse.m_iy*mouse.m_iy;
		if( d1 > d2 ) return(true); 
		else return(false);
	}
	bool operator>(const double &dist) { // 提供物件 > 數值的比較
		int d1 = this->m_ix*this->m_ix+this->m_iy*this->m_iy;
		if( d1 > dist*dist ) return(true); 
		else return(false);
	}
	friend bool operator>(const int &, CMouse &);
	int dist() {return(m_ix*m_ix+m_iy*m_iy);}
};
bool operator>(const int &dist, CMouse &mouse) { // 定義 > 運算子
	if( dist*dist > mouse.dist() ) return(true); 
	else return(false);
}
int main(void) 
{
	CMouse mouse1(4,4), mouse2(1,5); 
	if( mouse1 > 10 ) cout << "mouse1 與原點距離超過10" << endl;
	else if( 6 > mouse1 )  cout << "mouse1 與原點距小於 6" << endl;
	else cout << "mouse1 與原點距介於 10 到 6 之間" << endl;
	system("pause"); return(0);
}