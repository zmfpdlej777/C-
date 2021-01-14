#include<iostream>
using namespace std;

//출력문자 : @ 매개변수 1개
//@@@@@@@@@@ (10개)

//출력 개수:20 매개변수 2개
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