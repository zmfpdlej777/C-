#include<iostream>
using namespace std;
//outDate() 함수를 오버로딩
//년월일 전달해 outDate()함수
//년월일날짜구분기호를 전달받아 출력
//문자열 형태의 날짜를 전달받아 출력

//출력 결과
//2004/3/5
//2007#8#5
//2006/9/2
void outDate(int year,int month,int day) {
	cout << year << "/" << month << "/" << day << endl;
}
void outDate(int year, int month, int day,char c) {
	cout << year << c << month << c << day << endl;
}
void outDate(const char day[20]) {
	cout << day << endl;
}


int main(void) {
	outDate(2004,3,5);
	outDate(2007,8,5,'#');
	outDate("2006/9/2");

	return 0;
}