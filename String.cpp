#include<iostream>
using namespace std;

//String : C++���� ���ڿ��� �����ϴ� �ڷ���
// - ��ü�� �ڷ���
// - ��Ȯ�� ������ ũ��� ����. ���ڿ��� ũ��� �Ź� �ٸ��� ������

int main(void) {
	cout << sizeof(string) << endl;
	string str = "Yasuo";
	cout << str << endl;

	str = "Yone"; // C������ �Ұ���������, C++�� ����
	cout << str << endl;

	str += "& Yasuo"; //���굵 ����
	cout << str << endl;

	//�ε��̵� ����. ���� str�� �Լ� �� ������� ����
	cout << str.at(0) << endl;

	//ũ�� ���
	cout << str.length() << endl;





	return 0;
}