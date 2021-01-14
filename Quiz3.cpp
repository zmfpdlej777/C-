#include<iostream>
using namespace std;
//윤년을 판별하는 leapYear() 함수를 만들어 보자.
//* 윤년 계산
//- 1년은 365.2422일, 사용하는 달력의 날자는 365일로 계산하므로, 0.2422일이 남는다.
//400년을 곱하면 0.2422 * 400 = 97, 결국 400년 동안 97번의 윤년을 설정하면 된다.
//400년 중에서 4년마다 윤년이고, 100, 200, 300년은 윤년이 아니다.
//- "윤년은 4로 나누어 떨어지는 해이고, 그 중에서 100으로 나누어 떨어지는 해는 평년이고,
//그 중에서 400으로 나누어 떨어지는 해는 윤년이다."
//- 윤년 : 4, 8, 400, 2000, 2012
//평년 : 3, 50, 600, 2010
//* leapYear() 함수
//- 전달받은 년도가 윤년인지 판별하여, 윤년이면 true, 평년이면 false를 리턴한다.
bool leapyear(int n) {
	int r1 = 0, r2 = 0;
	bool result;
	if (n % 4 == 0 && n % 100 == 0) r1 = 1;
	else if (n % 400 == 0) r2 = 0;

	result=(r1 + r2==1) ? true : false;
	return result;
}

int main(void) {
	int year;
	while (1) {
		cout << "윤년 계산기 : ";
		cin >> year;

		if (leapyear(year)) cout << "윤년입니다!" << endl;
		else cout << "평년입니다!" << endl;
		return 0;
	}
}