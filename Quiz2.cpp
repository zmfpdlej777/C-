#include<iostream>
using namespace std;
//outDate() �Լ��� �����ε�
//����� ������ outDate()�Լ�
//����ϳ�¥���б�ȣ�� ���޹޾� ���
//���ڿ� ������ ��¥�� ���޹޾� ���

//��� ���
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