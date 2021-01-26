#include<iostream>

using namespace std;

class Mobile {
	//Mobile		�޴���ȭ Ŭ����
	//�ܼ��� ����� �Ϳ� ��ġ�� ����, �������� ���̱� ���� ������ ���� ���� ����
	//[1] �̸��� �ѹ� �����ϸ� ����� ������ �� �����ϴ�
	//[2] ������ �ƹ��� �ΰ� �����ص� 40���� �̸��� �Ұ����մϴ�
	//		20�������� ������ 40�������� �����ǵ���
	//[3] ��Ż糪 ���� ���� ��� ���� ������ �����ϵ���

private:
	char* const name;
	char* tel;
	int price;

public:

	//������
	Mobile(const char* name) : name(new char[strlen(name) + 1]), tel(NULL), price(400000) {
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	Mobile(const char* name, const char* tel, int price) : name(new char[strlen(name) + 1]), tel(NULL) {
		strcpy_s(this->name, strlen(name) + 1, name);
		this->setTel(tel);
		this->setPrice(price);
	}

	Mobile(const Mobile& ref) :name(new char[strlen(ref.name) + 1]), tel(NULL), price(ref.price) {
		strcpy_s(this->name, strlen(ref.name) + 1, ref.name);
		this->setTel(ref.tel);
	}

	//setter
	void setTel(const char* tel) {
		if (this->tel) {
			delete[] this->tel;
		}
		this->tel = new char[strlen(tel) + 1];
		strcpy_s(this->tel, strlen(tel) + 1, tel);
	}
	void setPrice(int price) {
		if (price <= 400000) {
			this->price = 400000;
			return;
		}
		this->price = price;
	}

	//getter
	const char* getName() const {
		return name;
	}
	const char* getTel() const {
		return tel;
	}
	int getPrice() const {
		return price;
	}

	void disp() const {
		cout << name << "\t" << tel << "\t" << price << endl;
	}

	~Mobile() {
		delete[] tel;
		delete[] name;
	}

	void compare(const Mobile& ref) const {
		if (this->price < ref.price) {
			cout << ref.name << endl;
		}
		else if (this->price > ref.price) {
			cout << this->name << endl;
		}
		else {
			cout << "����" << endl;
		}
	}
};
//������ Mobile�̶�� Ŭ������ ����Ͽ� �޴���ȭ ������ �����Ͽ����ϴ�.
//������ ������ �׸���� �߰��� �Ǿ����ϴ�.
//Mobile�̶�� Ŭ������ �ǵ帮�� �ʰ� ����� �̿��Ͽ� �߰��� �׸���� 
//�����ϰ� ����� �ͽ��ϴ�.
//�̸��� MobileEx�� ����
//(�߰��� �׸�)	����ī��(card)	���÷� ���� / Ȯ�� ����
//				�����Ⱓ(month)	�޴��� �����Ⱓ(��)


class MobileEx :public Mobile {
private:
	char* card; 
	int month;
public:
	MobileEx(const char* name,const char* tel, int price,const char* card,int month):Mobile(name,tel,price),card(new char[strlen(card)+1]),month(0) {
		//�⺻������
		
		setTel(tel);
		setPrice(price);
		strcpy_s(this->card, strlen(card) + 1, card);
		set_month(month);
	}
	MobileEx(MobileEx& p):Mobile(p),card(p.card),month(p.month) {
		//����
		strcpy_s(this->card, strlen(card) + 1, card);
		
	}

	~MobileEx() {//�Ҹ�
		delete[] card;
	}

	//set/get
	void set_month(int n) {
		month = n;
	}
	int get_month() const {
		return month;
	}
	char* get_card() const {
		return card;
	}
	void disp() const {
		cout << getName() << "\t" << getTel() << "\t" << getPrice() << "\t" << get_card()<< "\t" << get_month()<<"����"<<endl;
	}

};

int main(void) {
	//(�Ʒ��� ��ü�� ������ �� ���� ���)
	//		name	telecom	price	card		month
	//[1]	������7	KT		90����	����ī��		24����
	//[2]	������7	SK		30����	����ī��		30����
	//[3]	G6		LG		35����	�Ｚī��		36����
	MobileEx m1("I7", "KT", 900000, "����ī��", 24);
	m1.disp();
	MobileEx m2("������7", "SKT", 300000, "����ī��", 30);
	m2.disp();
	MobileEx m3("G6", "LG", 350000, "�Ｚī��", 36);
	m3.disp();


	return 0;
}