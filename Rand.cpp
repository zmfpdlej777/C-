#include<iostream>
#include<time.h>
using namespace std;

//rand()
// - 어떠한 기준(seed)에 의해서 0~ 32767까지의 임의의 정수값을 구하는 함수
// - seed값을 바꿔주지 않으면 한번 출력하면 계속 같은값이 나옴

//srand()
// - rand합수의 seed값을 설정하는 함수
// - 부호없는 정수값을 매개변수로 넣어주어야 한다.

//time()
// - 1970년 1월 1일 0시 0분 0초까지의 시간을 초 단위로 반환하는 함수
// - 매개변수로 NULL 사용
// - #time.h

int main(void) {
srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		int s = rand();
		cout << s << endl;;
	}



	return 0;
}

