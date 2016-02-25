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
	char cChiName[][10] = {"星期日", "星期一","星期二",
		"星期三","星期四","星期五","星期六",};
	char cEngName[][10] = {"Sunday","Monday","Tuesday",
		"Wednesday","Thursday","Friday","Saturday"};
	cout << "英文       中文    " << endl;
	for (theday = SUN ; theday <= SAT ; theday++ ) { // 輸出一週七天的中英文名稱
		cout << setiosflags(ios::left);
		cout << setw(10) << cEngName[theday] << " " << cChiName[theday] << endl;
	}
	system("pause"); return(0);
}