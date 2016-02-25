#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);	// –更ㄧΑ常ㄧΑ
float add(float,float);
int main(void)
{
	int  ia = 1, ib = 2;
	float fx = 1.3f, fy = 5.5f;
	cout << ia << " + " << ib << " = " << add(ia,ib) << endl;
	cout << fx << " + " << fy << " = " << add(fx,fy) << endl;
	system("pause"); return(0);
}
int add(int i,int j) // 璹ㄧ计add()
{	
	return(i+j);	// 肚 i+j 
}
float add(float i, float j) // 璹ㄧ计add()
{	
	return(i+j);	// 肚 i+j 
}