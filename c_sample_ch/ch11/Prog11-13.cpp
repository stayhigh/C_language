#include <iostream>
#include <cstdlib>
using namespace std;
void swap(int &, int &); // �ǰѷөI�s
int main(void) 
{
	int a = 5, b = 3;
	cout << "Before Calling   : a = " << a << ", b = " << b << endl;
	cout << "In main function : &a = " << &a << ", &b = " << &b << endl;
	swap(a, b);// �ǰѷөI�s
	cout << "After Calling    : a = " << a << ", b = " << b << endl;
	system("pause"); return(0);
}
void swap(int &x, int &y)
{
	int t;
	t = x; x = y;  y = t;
	cout << "In swap function : &x = " << &x << ", &y = " << &y << endl;
}