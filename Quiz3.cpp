#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
inline void cal(int n1, int n2) {
	cout << "��: " << n1 + n2 << "/ ��: " << n1 - n2 << "/ ��: " << n1 * n2 << "/ ��: " << n1 / (double)n2 << endl;
}

inline int randomize(int n) {
	
	int result=0;
	result = rand() % n+1;

	return result;
}

inline void Delay(int n) {
	//Sleep(n) : n(1000/ms=1s)��ŭ �ܼ��� �����ִ� ���
	Sleep(n*1000);
}


int main(void) {
	//cal : ���� 2�� ���޹޾� ���������� ȭ�鿡 ���. *inline����
	cal(1, 2);

	//randomize : ���� 1�� ���޹޾� 1~���� �� ������ 1�� ��ȯ. *inline����
	srand((unsigned)time(NULL));
	cout << "��� : " << randomize(15) << endl;
	cout << "��� : " << randomize(898) << endl;

	//Delay : ���� �Է¹޾� �ش� �ð���ŭ �Ͻ�������Ű�� �Լ�. *inline����
	Delay(1);
}
