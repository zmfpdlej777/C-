#include<iostream>

using namespace std;

//정수 2개를 교환하는 swap() 함수를 레퍼런스를 이용하여 작성하고, 문자 2개를 교환하는
//swap() 함수를 포인터를 이용하여 작성하라.
//그리고, main() 함수도 주석 부분의 프로그램을 완성시킨다.
void swap(char* a, char* b) {
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(int& a, int& b) {
	
	int tmp = a;
	a = b;
	b = tmp;
}



int main(void) {

	int a, b;
	cout << "정수 2개 입력 : ";
	cin >> a >> b;
	//매개변수로 레퍼런스를 이용한 swap() 함수를 호출하라.
	swap(a, b);
	cout << "교환 결과 : " << a << ", " << b << endl;
	char c1, c2;
	cout << "\n문자 2개 입력 : ";
	cin >> c1 >> c2;
	swap(c1, c2);
	//매개변수로 포인터를 이용한 swap() 함수를 호출하라.
	cout << "교환 결과 : " << c1 << ", " << c2 << endl;

	return 0;
}