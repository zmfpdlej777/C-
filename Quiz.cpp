#include<iostream>

using namespace std;

//������ �Ǽ��� 10�� ���� ���ϴ� AddTen() �Լ��� �ۼ��϶�.
//AddTen() �Լ��� �Ű������� �����Ϳ� ���۷����� �̿��Ͽ� ���� �ۼ��Ѵ�.
//�׸���, main() �Լ��� �ּ� �κе� ���α׷��� �ϼ���Ų��.
void AddTen(int* n1, double* n2) {
	*n1 += 10;
	*n2 += 10;
}
void AddTen(int& n1, double& n2) {
	n1 += 10;
	n2 += 10;
}



int main(void) {

	int a;
	double d;
	cout << "���� �Է� : ";
	cin >> a;
	cout << "�Ǽ� �Է� : ";
	cin >> d;
	//�Ű������� �����͸� �̿��� addTen() �Լ��� ȣ���϶�.
	AddTen(&a, &d);
	cout << "�������� ��ȯ ��� : " << a << ", " << d << endl;
	//�Ű������� ���۷����� �̿��� addTen() �Լ��� ȣ���϶�.
	AddTen(a, d);
	cout << "���۷����� ��ȯ ��� : " << a << ", " << d << endl;


	return 0;
}