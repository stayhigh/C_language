#include <iostream>
#include <cstdlib>
int main(void) 
{
	int x; // 宣告變數 x, 用來儲存玩家輸入的攻擊力
	std::cout << "輸入攻擊力 :";
	std::cin >> x;
	std::cout << "對怪物的傷害值為 :" << x*2-15 << std::endl;
	system("pause"); return(0);
}