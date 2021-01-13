#include<iostream>
using namespace std;
int square(int &n) {
	n = n * n;
	return n;
	}
double square(double &n) {
	n = n * n;
	return n;
}

int main(void) {
	//square()함수를 오버로딩 해보자
	//정수의 제곱을 연산하여 리턴
	//실수의 제곱을 연산하여 리턴
	int n;
	cout << "정수 입력 : ";
	cin >> n;
	double db;
	cout << "실수 입력 : ";
	cin >> db;
	
	cout << endl << "정수 제곱 : " << square(n) << endl;
	cout << "실수 제곱 : " << square(db) << endl;
	//cout << "정수 : " << n << " /실수 : " << db << endl;

	return 0;
}