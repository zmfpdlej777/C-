#include<iostream>

using namespace std;

//정수와 실수에 10을 각각 더하는 AddTen() 함수를 작성하라.
//AddTen() 함수는 매개변수로 포인터와 레퍼런스를 이용하여 각각 작성한다.
//그리고, main() 함수의 주석 부분도 프로그램을 완성시킨다.
void AddTen(int* n1, double* n2) {
	*n1 += 10;
	*n2 += 10;
}
void AddTen(int& n1, double& n2) {
	n1 += 10;
	n2 += 10;
}



int main(void) {

	int a;
	double d;
	cout << "정수 입력 : ";
	cin >> a;
	cout << "실수 입력 : ";
	cin >> d;
	//매개변수로 포인터를 이용한 addTen() 함수를 호출하라.
	AddTen(&a, &d);
	cout << "포인터형 변환 결과 : " << a << ", " << d << endl;
	//매개변수로 레퍼런스를 이용한 addTen() 함수를 호출하라.
	AddTen(a, d);
	cout << "레퍼런스형 변환 결과 : " << a << ", " << d << endl;


	return 0;
}