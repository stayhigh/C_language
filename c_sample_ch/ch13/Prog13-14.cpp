#include <iostream>
#include <cstdlib>
using namespace std;
class CMouse {
private:
	int m_iWeight;	// ρ公秖
public:
	CMouse(int iw=0) {m_iWeight = iw;} // 砞﹚ρ公秖
	int operator+(CMouse &mouse) { // ﹚竡 + 笲衡. 癘眔ㄏノ肚把酚㊣
		return(m_iWeight + mouse.m_iWeight);
	}
};
int main(void)
{
	CMouse mouse1(100); 
	CMouse mouse2(235);
	cout << "ㄢ唉ρ公" <<  mouse1 + mouse2 << endl;
	system("pause"); return(0);
}