#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);	// ���C�@�Ӧh�����禡���ŧi�禡���쫬
float add(float,float);
int main(void)
{
	int  ia = 1, ib = 2;
	float fx = 1.3f, fy = 5.5f;
	cout << ia << " + " << ib << " = " << add(ia,ib) << endl;
	cout << fx << " + " << fy << " = " << add(fx,fy) << endl;
	system("pause"); return(0);
}
int add(int i,int j) // �ۭq���add()
{	
	return(i+j);	// �Ǧ^ i+j ����
}
float add(float i, float j) // �ۭq���add()
{	
	return(i+j);	// �Ǧ^ i+j ����
}