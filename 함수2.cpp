#include<iostream>
using namespace std;

int input() {
	int n;
	cout << "�� �Է�(0:����) : ";
	cin >> n;
	return n;
}

void compare(int n) {
	do{	cout << "�� �Է�(0:����) :";
		cin >> n;
		if (n == 0) {
			cout << "�����մϴ�." << endl;
			return;
		}
		if (n % 2 == 0) cout << n << "�� ¦�� �Դϴ�." << endl<<endl;
		else cout << n << "�� Ȧ�� �Դϴ�." << endl<<endl;

	} while (n != 0);
}

int main(void) {
	//while�� ���, �Լ� ���
	//Ȧ¦ �Ǻ����α׷�
	//�Է� - �� �Է�(0����):5			-20							0
	//��� - 5�� Ȧ���Դϴ�.			-20�� ¦���Դϴ�.				����
	//�Է¹޴� �Լ�, Ȧ¦ �����ϴ� �Լ�, ??? �Լ� �ϳ�.. �Լ� �и��� ��
	int n = input();
	compare(n);



	return 0;
}