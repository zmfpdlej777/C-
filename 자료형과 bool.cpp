#include<iostream>
using namespace std;
//C++에서의 자료형

//1. 기본형(원시형) - 데이터를 담는 공간
//	- + 논리형(boolean)

//2. 객체형(class형) - 데이터를 담는 공간과 그 공간을 제어하는 기능이 합쳐진 형태
//	- 기본형을 제외한 모든 자료형.
//  - class라는 사용자 정의 자료형.
//  - string : 문자열을 관리하는 자료형 (잘 안씀)

//*bool : 참,거짓을 저장하고 관리하는 자료형
// - 0 = 거짓, 0!=참
// true,false는 c++에서 만들어진 키워드

int main(void) {
	cout << sizeof(bool) << endl;
	bool a = 0;
	cout << a << endl;
	a = 1;
	cout << a << endl;
	a = 10 > 5;
	cout << a << endl;
	//str cmp?







	return 0;
}