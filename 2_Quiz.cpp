#include<iostream>
using namespace std;

int main(void) {
	int* num = new int(5);
	//C++�� �ʱ�ȭ��Ÿ���� ����. �����Ҵ� �ʱ�ȭ�� ����

	double* db = new double; //���������� new double(3.141592); ����
	*db = 3.141592;

	//�̺κ� �߿�!!!!!
	char* ch = new char[strlen("�ȳ��ϼ���") + 1]; // =�迭ũ�� ����+NULL�� 
	strcpy_s(ch, strlen("�ȳ��ϼ���") + 1, "�ȳ��ϼ���"); //strcpy_s(�迭��,�迭ũ��,���� char)
	cout << ch << endl;
	//��� ����!!!!!!!

	struct info {
		char name[10];
		int age;
	};
	info* people = new info{ "ȫ�浿",20 };
	cout << people->name << endl;
	cout << people->age << endl;


	delete num,db,people;
	//delete db;
	delete[] ch;
	//delete[] ch2;

	return 0;
}