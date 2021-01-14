#include<iostream>
using namespace std;
//* Add() 함수
//- 전달한 매개변수 범위의 합계를 구한다.
//- 인수를 전달받지 않으면, 디폴트 값인 1~100 사이의 합을 리턴한다.
//- 인수를 한 개 전달받으면, x~100 사이의 합을 리턴한다.
//- 인수를 두 개 전달받으면, x~y 사이의 합을 리턴한다.

//int Add() {
//	int n=100, result = 0;
//	for (int i = 1; i <= n; i++) {
//		result += i;
//	}
//	return result;
//}
//
//int Add(int x) {
//	int result = 0;
//	for (int i = x; i <= 100; i++) {
//		result += i;
//	}
//	return result;
//}

int Add(int x=1, int y=100) {
	int result = 0;
	for (int i = x; i <= y; i++) {
		result += i;
	}
	return result;
}

int main(void) {
	cout << "전달인자 0개 결과 : " << Add() << endl;
	cout << "전달인자 1개 결과 : " << Add(5) << endl;
	cout << "전달인자 2개 결과 : " << Add(10,20) << endl;



	return 0;
}