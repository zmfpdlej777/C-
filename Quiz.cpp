#include<iostream>
using namespace std;
int square(int &n) {
	n = n * n;
	return n;
	}
double square(double &n) {
	n = n * n;
	return n;
}

int main(void) {
	//square()�Լ��� �����ε� �غ���
	//������ ������ �����Ͽ� ����
	//�Ǽ��� ������ �����Ͽ� ����
	int n;
	cout << "���� �Է� : ";
	cin >> n;
	double db;
	cout << "�Ǽ� �Է� : ";
	cin >> db;
	
	cout << endl << "���� ���� : " << square(n) << endl;
	cout << "�Ǽ� ���� : " << square(db) << endl;
	//cout << "���� : " << n << " /�Ǽ� : " << db << endl;

	return 0;
}