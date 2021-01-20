#include<iostream>
using namespace std;
class Mobile {
private:
	char* name=NULL;
	char* firm=NULL;
	int price=0;
public:
	Mobile(const char* name,const  char* firm,int price) :name(NULL),firm(NULL) {
		this->set_Name(name);
		this->set_Firm(firm);
		this->set_Price(price);
	}

	void disp() {
		cout << "모델명 : " << name << endl;
		cout << "통신사 : " << firm << endl;
		cout << "가격 : " << price << "만원" << endl;;
	}

	void set_Name(const char* name) {
		if (this->name) {//동적할당된 공간
			delete[] this->name; // 앞서 생성되 있던 공간을 삭제
		}
		this->name = new char[strlen(name) + 1]; //새로운 동적할당 
		strcpy_s(this->name, strlen(name) + 1, name); //문자열배열이니까 strcpy로 기입(복사)
		
	}
	void set_Firm(const char* firm) {
		if (this->firm) {
			delete[] this->firm;
		}
		this->firm = new char[strlen(firm) + 1];
		strcpy_s(this->firm, strlen(firm)+1, firm);

	}
	void set_Price(int n) {
		this->price = n;
	}

	char get_Name(char* name) {
		return *name;
	}
	char get_Firm(char* firm) {
		return *firm;
	}
	int get_Price(int n) {
		return n;
	}

	void set_Data(char* name, char* firm, int n) {
		set_Name(name);
		set_Firm(firm);
		set_Price(n);
	}

};


int main(void) {
	Mobile m1("G6","LG",70);
	Mobile m2 = { "아이폰7","KT",95 };
	Mobile m3("Galaxy S8", "STK", 90);
	m1.disp();



	return 0;
}