#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_ix, m_iy;	// 老鼠的座標
public:
	CMouse(int ix=0, int iy=0) { m_ix = ix; m_iy = iy;} // 設定老鼠的位置
	bool operator>(CMouse &mouse) { // 定義 > 運算子. 記得使用傳參照呼叫
		int d1, d2;
		d1 = this->m_ix*this->m_ix+this->m_iy*this->m_iy;
		d2 = mouse.m_ix*mouse.m_ix+mouse.m_iy*mouse.m_iy;
		if( d1 > d2 ) return(true); // 直接比較平方,而不執行開更號的計算
		else return(false);
	}
};
int main(void)
{
	CMouse mouse1(4,4); 
	CMouse mouse2(1,5);
	if( mouse1 > mouse2 ) cout << "mouse1 離原點比較遠" << endl;
	else cout << "mouse2 離原點比較遠" << endl;
	system("pause"); return(0);
}