#include <iostream>
#include <iomanip>
using namespace std;
//#define START_DEBUG 1
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*�]�w�}�C����l��*/
	int i, j, t, iSwitch; /* iSwitch : �ƭȪ�����*/
	for( j = 0; j < 6 ; j++ ) cout << setw(4) << A[j];
	cout << endl;
	do {
		iSwitch = 0; /* ���]�ƭȨS������*/
		for( i = 0 ; i < 5 ; i++ )
			if( A[i] > A[i+1] ) { t = A[i]; A[i] = A[i+1]; A[i+1] = t; iSwitch = 1; }
#ifdef START_DEBUG
		for( j = 0; j < 6 ; j++ ) cout << setw(4) << A[j];
		cout << endl;
#endif
	} while( iSwitch );
#ifndef START_DEBUG
		for( j = 0; j < 6 ; j++ ) cout << setw(4) << A[j];
		cout << endl;
#endif
	system("pause"); return(0);
 }