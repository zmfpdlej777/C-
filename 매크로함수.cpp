#include<iostream>
using namespace std;
//��ũ�� �Լ� : define�� �̿��� ������ �ڵ忡 �Լ�ȭ
// - ������ ������ ��ó�� �������� �ٷ� �ڵ�� ��ġ.
// - ���� : ������, ���� ���
// - ���� : ������ �����, ����� ����
#define SUM(a,b) a+b
#define Big(a,b) a>b? a:b
#define MUL(a,b) a*b

//in-line �Լ� : C++������ ��ũ�� �Լ�. �Ϲ� ��ũ�� �Լ��� ������ĺ��� ���� ����.
// - �Ϲ� �Լ� ���� �տ� inline(Ű����)�� �����ָ� ��
// - ������ : �Ϲ� �Լ��� ȣ����ġ���� �Լ��� ������ �Ű� ������, in-line�Լ��� �Լ� ������ ȣ����
//			 ������ �����Ͽ� �۵���Ų��. ������ �ű��� �ʰ� ��� �߳�������.
inline int ML(int a, int b) {
	return a * b;
}

int main(void) {
	cout << SUM(1, 2) << endl;
	cout << (Big(2, 3)) << endl;
	cout << MUL(1 + 2, 2 + 1) << endl;
	//		=1+2*2+1
	cout << MUL((1 + 2), (2 + 1)) << endl;
	cout << ML(1 + 2, 2 + 1) << endl;
	return 0;
}