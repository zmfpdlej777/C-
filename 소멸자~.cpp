#include<iostream>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person() :name(NULL), age(1) {
		cout << "����Ʈ ������" << endl;
	};
	Person(const char* name, int age) :name(NULL) { //������
		this->set_name(name);     
		this->set_age(age);
	}
	Person(const Person& ref):name(NULL),age(ref.age) {
		cout << "���� ������" << endl;
		this->set_name(ref.name);
		//this->name = ref.name; <������ ����
		//this->age = ref.age;	  ��
	}
	~Person() { //�Ҹ��� 
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] name;
	}

	void set_name(const char* name) {
		if (this->name) delete[] this->name;
		this->name = new char[(strlen(name) + 1)];
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	void set_age(int n) {
		age = n;
	}
	char* get_name() {
		return name;
	}
	int get_age() {
		return age;
	}


	void shinfo(Person p) {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	void func(Person& p) {//���� �����ڰ� ���� ���..'�Ű�����'

	}
	Person func() { //���� �����ڰ� ���� ���....'��ȯ'
		Person p; //���������� ������� ��ü

		return p; //���ο� ���������� ������� ��ü�� ������ ������
	}			  //��������ڷ� ������Ѽ� ��ȯ������
};



int main(void) {
	Person* p1 = new Person("�߽���",20);
	p1->shinfo(*p1);
	cout << "p1 ȣ�� ��" << endl;
	Person p2(*p1);
	p2.shinfo(p2);

	cout << "�׳� �Ϲ����� ������\n\n\n";
	Person p3("���",25);
	Person p4;
	//p4 = p3; <-����
	p3.func();


	return 0;
}