#include <iostream>
#include <time.h>
using namespace std;
int main(void)
{
	double i, total = 0;
	double duration; // �p��g�L���ɶ�
	clock_t start, finish;
	start = clock();
	for( i = 1 ; i < 1000000000 ; i++ ) total+=i;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "1+2+...+1000000000 = " << total << endl;
	cout << "�ݭn " << duration << "��" << endl;
	system("pause"); return(0);
 }