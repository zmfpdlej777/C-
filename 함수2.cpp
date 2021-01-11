#include<iostream>
using namespace std;

int input() {
	int n;
	cout << "수 입력(0:종료) : ";
	cin >> n;
	return n;
}

void compare(int n) {
	do{	cout << "수 입력(0:종료) :";
		cin >> n;
		if (n == 0) {
			cout << "종료합니다." << endl;
			return;
		}
		if (n % 2 == 0) cout << n << "는 짝수 입니다." << endl<<endl;
		else cout << n << "은 홀수 입니다." << endl<<endl;

	} while (n != 0);
}

int main(void) {
	//while문 사용, 함수 사용
	//홀짝 판별프로그램
	//입력 - 수 입력(0종료):5			-20							0
	//출력 - 5는 홀수입니다.			-20은 짝수입니다.				종료
	//입력받는 함수, 홀짝 구분하는 함수, ??? 함수 하나.. 함수 분리할 것
	int n = input();
	compare(n);



	return 0;
}