#include <iostream>
#include <cstdlib>
using namespace std;
float circle(float fr = 1.0f,float pi=3.14f); // 函式原型
int main(void)
{
	cout << "circle()=" << circle() << endl;
	cout << "circle(2.0)=" << circle(2.0f) << endl; 
	cout << "circle(2.0,3.14159)=" << circle(2.0f,3.1415926f) << endl;
	system("pause"); return(0);
}
float circle(float fr, float pi)	// circle()函式的定義，計算圓面積
{
	return (pi*fr*fr);
}