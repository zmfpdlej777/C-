#include<iostream>

using namespace std;

class Info {
private:
	char* name;
	int age;

public:
	//������
	Info() : name(NULL), age(1) {
		cout << "�θ� ����Ʈ ������ ȣ��" << endl;
	}

	Info(const char* name) : name(NULL) {
		this->setName(name);
		this->setAge(age);
	}

	Info(const char* name, int age) : name(NULL) {
		cout << "�θ� ������ ȣ��" << endl;
		this->setName(name);
		this->setAge(age);
	}

	//���� ������
	Info(const Info& ref) : name(NULL), age(ref.age) {
		cout << "�θ� ���� ������ ȣ��" << endl;
		this->setName(ref.name);
	}

	//setter
	void setName(const char* name) {
		if (this->name) {
			delete[] this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}


	void setAge(int age) {
		if (age < 1) {
			cout << "���̰� �߸��ԷµǾ����ϴ�..." << endl;
			this->age = 1;
			return;
		}
		this->age = age;
	}

	//getter
	const char* getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}

	//user
	void setData(const char* name, int age) {
		this->setName(name);
		this->setAge(age);
	}

	void disp() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	//�Ҹ���
	~Info() {
		cout << "�θ� �Ҹ��� ȣ��" << endl;
		delete[] name;
	}

};
class NewInfo :public Info {
private:
	double ki;
public:
	//������
	NewInfo() {
		cout << "�ڽ� �⺻ ������ ȣ��" << endl;
	}
	//�θ� ��������� �ʱ�ȭ��, �ڽ�Ŭ�������� �Ű������� �޾��־�� �Ѵ�.(�ڽ� ������������� ��ü ����X)
	NewInfo(double ki) :ki(ki) {
		cout << "�ڽ� ������ ȣ��" << endl;
	}
	//**�ڽ�Ŭ�������� ���ٸ� ��ø� ���� ������ �ڵ����� �θ��� ����Ʈ �����ڸ� ȣ��
	//������ �ڽ� Ŭ�������� �θ��� �����ڸ� �����Ͽ� �ݸ� �ʱ�ȭ�� ���� ȣ�� ����
	NewInfo(const char* name,int age,double ki) :Info(name,age),ki(ki) {
		cout << "�θ��ڽ� ������ ȣ��" << endl;  //���ݸ� �ʱ�ȭ
	}
	NewInfo(NewInfo& p):Info(p),ki(p.ki) {
		cout << "���� ������" << endl;
	}

	//�޼���
	void set_ki(double k) {
		ki = k;
	}
	double get_ki() const {
		return ki;
	}
	//�Լ��� �������̵�
	void disp() const {
		Info::disp(); //Ŭ������ ���ؼ� �θ��� �Լ��� ������.
		//cout << "�̸� : " << getName() << endl;
		//cout << "���� : " << getAge() << endl;
		cout << "Ű : " << ki << endl;
	}


	//�Ҹ��ڴ� �����Ҵ翡 ���� �����ȴ�. == ����Ŭ������ �����Ҵ��� �ִٸ� �װ��� ���� �Ҹ��ڸ� ���.
	~NewInfo() {
		cout << "�ڽ� �Ҹ��� ȣ��" << endl;
	}
};


int main(void) {
	NewInfo n; // ���� : �θ���� ���� > �ڽİ���  ���� > �ڽİ��� ���� > �θ���� ���� 
	cout << "===================================================" << endl;

	NewInfo n2("�߽���",26,177.7);
	n2.disp();

	return 0;
}