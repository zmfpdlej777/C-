#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
inline void cal(int n1, int n2) {
	cout << "합: " << n1 + n2 << "/ 차: " << n1 - n2 << "/ 곱: " << n1 * n2 << "/ 몫: " << n1 / (double)n2 << endl;
}

inline int randomize(int n) {
	
	int result=0;
	result = rand() % n+1;

	return result;
}

inline void Delay(int n) {
	//Sleep(n) : n(1000/ms=1s)만큼 콘솔을 멈춰주는 기능
	Sleep(n*1000);
}


int main(void) {
	//cal : 정수 2개 전달받아 합차곱몫을 화면에 출력. *inline구현
	cal(1, 2);

	//randomize : 정수 1개 전달받아 1~정수 중 무작위 1개 반환. *inline구현
	srand((unsigned)time(NULL));
	cout << "결과 : " << randomize(15) << endl;
	cout << "결과 : " << randomize(898) << endl;

	//Delay : 정수 입력받아 해당 시간만큼 일시정지시키는 함수. *inline구현
	Delay(1);
}
