#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
enum Week{SUN,MON,TUE,WED,THU,FRI,SAT} theday;
inline Week operator++(Week &rs, int) {
	return rs = (Week)(rs + 1);
}
int main(void)
{
	char cChiName[][10] = {"�P����", "�P���@","�P���G",
		"�P���T","�P���|","�P����","�P����",};
	char cEngName[][10] = {"Sunday","Monday","Tuesday",
		"Wednesday","Thursday","Friday","Saturday"};
	cout << "�^��       ����    " << endl;
	for (theday = SUN ; theday <= SAT ; theday++ ) { // ��X�@�g�C�Ѫ����^��W��
		cout << setiosflags(ios::left);
		cout << setw(10) << cEngName[theday] << " " << cChiName[theday] << endl;
	}
	system("pause"); return(0);
}