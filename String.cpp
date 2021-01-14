#include<iostream>
using namespace std;

//String : C++에서 문자열을 관리하는 자료형
// - 객체형 자료형
// - 정확히 정해진 크기는 없다. 문자열의 크기는 매번 다르기 때문에

int main(void) {
	cout << sizeof(string) << endl;
	string str = "Yasuo";
	cout << str << endl;

	str = "Yone"; // C에서는 불가능하지만, C++은 가능
	cout << str << endl;

	str += "& Yasuo"; //연산도 가능
	cout << str << endl;

	//인덱싱도 가능. 물론 str의 함수 내 기능으로 가능
	cout << str.at(0) << endl;

	//크기 출력
	cout << str.length() << endl;





	return 0;
}