#include<iostream>
using namespace std;

class Person{
public:
	string name;
	int age;

	Person(string name,int age) {
		this->age = age;
		this->name = name;
	}
	void shinfo(Person p1) {
		cout << "�̸� : " << p1.name << endl;
		cout << "���� : " << p1.age << endl;
	}

	void eat(Person p1) {
		cout << p1.name << "��(��) ���� �Խ��ϴ�." << endl;
	}
};


int main(void) {
	Person p1 = { "�߽���",25 };
	p1.shinfo(p1);
	p1.eat(p1);

	return 0;
}