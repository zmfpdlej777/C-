#include<iostream>
using namespace std;

int input() {
	int n;
	cout << "정수 입력 : ";
	cin >> n;
	return n;

}

int  reverse(int n) {
	int r;
	if (n != 0) {
		r = -n;
		return r;
	}
	else {
		cout << "올바른 정수가 아닙니다." << endl;
		return 0;
	}
		//cout << "결과 : " << n << endl;	
}

//int reverse(int n) {
//	int r;
//
//	if (n%1>0&&n%1<1) {
//		cout << "올바른 정수가 아닙니다." << endl;
//		return 0;
//	}
//	else {
//		r = -n;
//		return r;
//	}
//}


int main(void) {
	//reverse()함수를 통해 입력받은 함수의 보수를 구해라
	//출력은 main
	int i = input();
	int r = reverse(i);
	
	cout <<input() << "의 보수는 " <<r <<"입니다."<< endl;

	//※결론
	//함수는 선택이 아니라 필수다.
	//어떻게 구현해야 될지 모르겠으면 main에 먼저 작성 후, void형태로 함수를 생성 후, 기능을 복붙해라. return은 알아서
	//추후에는 점점 메인에 먼저 그리는게 아니라 바로 함수를 작성할 수 있게 해봐라.
	
	return 0;
}