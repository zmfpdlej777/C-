#include<iostream>
using namespace std;

//default 매개변수 : 함수 정의시 매개변수에 기본값을 넣어줌으로써 전달인자를 받지 않았을때 자동으로 기본값을 출력
// - 함수의 갯수를 줄이는 기능
// - 매개변수 정의할 때, 대연연산자와 함께 기본값을 설정해주면 된다
// - *오버로드시 함수의 호출 형식에 주의하여야 한다. (전달인자가 없는 경우 겹쳐서 error 날수도..)
// - *전달받은 매개변수는 항상 왼쪽부터, 첫번째부터 들어간다. 때문에 가장 우측부터 정의하여야 한다.
// *Python - 오버로드 X, 디폴트 매개변수가 강화 / JAVA - 오버로드가 강화, 디폴트 매개변수 X

int example(int a = 1) {
	return a;
}


int main(void) {
	cout << "매개변수 전달 X : " << example() << endl;
	cout << "매개변수 전달 O : " << example(5) << endl;



	return 0;
}