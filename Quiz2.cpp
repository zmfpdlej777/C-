#include<iostream>

using namespace std;

//���� 2���� ��ȯ�ϴ� swap() �Լ��� ���۷����� �̿��Ͽ� �ۼ��ϰ�, ���� 2���� ��ȯ�ϴ�
//swap() �Լ��� �����͸� �̿��Ͽ� �ۼ��϶�.
//�׸���, main() �Լ��� �ּ� �κ��� ���α׷��� �ϼ���Ų��.
void swap(char* a, char* b) {
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(int& a, int& b) {
	
	int tmp = a;
	a = b;
	b = tmp;
}



int main(void) {

	int a, b;
	cout << "���� 2�� �Է� : ";
	cin >> a >> b;
	//�Ű������� ���۷����� �̿��� swap() �Լ��� ȣ���϶�.
	swap(a, b);
	cout << "��ȯ ��� : " << a << ", " << b << endl;
	char c1, c2;
	cout << "\n���� 2�� �Է� : ";
	cin >> c1 >> c2;
	swap(c1, c2);
	//�Ű������� �����͸� �̿��� swap() �Լ��� ȣ���϶�.
	cout << "��ȯ ��� : " << c1 << ", " << c2 << endl;

	return 0;
}