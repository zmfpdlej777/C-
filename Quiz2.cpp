#include<iostream>
using namespace std;

//��¹��� : @ �Ű����� 1��
//@@@@@@@@@@ (10��)

//��� ����:20 �Ű����� 2��
//@@@@@@@@@@@@@@@@@@@@@@@

void alpha(char ch='*', int n=10) {
	for (int i = 0; i < n; i++) {
		cout << ch;
	}
	cout << endl;
}




int main(void) {
	alpha();
	cout << endl;
	alpha('@');
	cout << endl;
	alpha('@',20);
	


	return 0;
}