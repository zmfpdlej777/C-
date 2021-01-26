#include<iostream>

using namespace std;

class Mobile {
	//Mobile		휴대전화 클래스
	//단순히 만드는 것에 그치지 말고, 안정성을 높이기 위해 다음과 같이 강제 구현
	//[1] 이름은 한번 설정하면 절대로 변경할 수 없습니다
	//[2] 가격은 아무리 싸게 설정해도 40만원 미만은 불가능합니다
	//		20만원으로 설정시 40만원으로 설정되도록
	//[3] 통신사나 가격 등은 계속 변경 설정이 가능하도록

private:
	char* const name;
	char* tel;
	int price;

public:

	//생성자
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
			cout << "같다" << endl;
		}
	}
};
//기존에 Mobile이라는 클래스를 사용하여 휴대전화 정보를 관리하였습니다.
//세월이 지나서 항목들이 추가가 되었습니다.
//Mobile이라는 클래스는 건드리지 않고 상속을 이용하여 추가된 항목까지 
//저장하게 만들고 싶습니다.
//이름은 MobileEx로 생성
//(추가된 항목)	제휴카드(card)	수시로 설정 / 확인 가능
//				약정기간(month)	휴대폰 약정기간(월)


class MobileEx :public Mobile {
private:
	char* card; 
	int month;
public:
	MobileEx(const char* name,const char* tel, int price,const char* card,int month):Mobile(name,tel,price),card(new char[strlen(card)+1]),month(0) {
		//기본생성자
		
		setTel(tel);
		setPrice(price);
		strcpy_s(this->card, strlen(card) + 1, card);
		set_month(month);
	}
	MobileEx(MobileEx& p):Mobile(p),card(p.card),month(p.month) {
		//복생
		strcpy_s(this->card, strlen(card) + 1, card);
		
	}

	~MobileEx() {//소멸
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
		cout << getName() << "\t" << getTel() << "\t" << getPrice() << "\t" << get_card()<< "\t" << get_month()<<"개월"<<endl;
	}

};

int main(void) {
	//(아래의 객체를 생성한 뒤 정보 출력)
	//		name	telecom	price	card		month
	//[1]	아이폰7	KT		90만원	국민카드		24개월
	//[2]	갤럭시7	SK		30만원	신한카드		30개월
	//[3]	G6		LG		35만원	삼성카드		36개월
	MobileEx m1("I7", "KT", 900000, "국민카드", 24);
	m1.disp();
	MobileEx m2("갤럭시7", "SKT", 300000, "신한카드", 30);
	m2.disp();
	MobileEx m3("G6", "LG", 350000, "삼성카드", 36);
	m3.disp();


	return 0;
}