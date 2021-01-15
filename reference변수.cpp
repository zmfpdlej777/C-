#include<iostream>
using namespace std;
//reference 변수 : 변수에 여러개의 이름을 부여하는 변수
// - 쉽게 생각하면 주소를 공유하는 변수
// - 포인터의 기능을 가지고 있으면서, 사용은 일반 변수처럼 사용되는 변수
// ex) void Adder(int& a){} <==주소값 전달=== main{int a=10, Adder(a)}
// - 일반 변수 형태에서는 가능하지만 배열은 사용 X
// - 형식 : 자료형 &변수명(매개변수 시) / 자료형 &변수명 = 변수공간(기본 선언시)
// - 주의 : 반드시 선언하면서 초기화 하여야 한다.
//          상수는 reference 변수로 초기화 할 수 없다.
//			함수에 매개변수로 이용시, 오버로드되면 함수 중복선언된다.

void Adder(int& a) {//매개변수 시
	 a++;
}


int main(void) {
	int a = 10;
	int& ref = a; //기본 선언시
	Adder(a);
	cout << ref << endl;

	cout << &a << endl;
	cout << &ref << endl;
	//Adder(&a); 얘는 포인터용
	Adder(ref);
	cout << ref << endl;
	return 0;
}