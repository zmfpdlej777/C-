#include<iostream>
using namespace std;
//* Add() �Լ�
//- ������ �Ű����� ������ �հ踦 ���Ѵ�.
//- �μ��� ���޹��� ������, ����Ʈ ���� 1~100 ������ ���� �����Ѵ�.
//- �μ��� �� �� ���޹�����, x~100 ������ ���� �����Ѵ�.
//- �μ��� �� �� ���޹�����, x~y ������ ���� �����Ѵ�.

//int Add() {
//	int n=100, result = 0;
//	for (int i = 1; i <= n; i++) {
//		result += i;
//	}
//	return result;
//}
//
//int Add(int x) {
//	int result = 0;
//	for (int i = x; i <= 100; i++) {
//		result += i;
//	}
//	return result;
//}

int Add(int x=1, int y=100) {
	int result = 0;
	for (int i = x; i <= y; i++) {
		result += i;
	}
	return result;
}

int main(void) {
	cout << "�������� 0�� ��� : " << Add() << endl;
	cout << "�������� 1�� ��� : " << Add(5) << endl;
	cout << "�������� 2�� ��� : " << Add(10,20) << endl;



	return 0;
}