#include<iostream>
using namespace std;

class Player {
private:
	char* id;
	int level = 1;
	int attack = 5;
	int hp = 20;

public:
	//Player() {}
	Player(const char* id):id(NULL),level(1),attack(5),hp(20) {
		cout << "====기본 생성자====" << endl;
		this->set_id(id);
	}
	Player(const char*id,int l) :level(1), attack(5), hp(20) {
		this->set_id(id);
		this->set_level(l);
		this->levelUp(l);
		/*this->set_attack(a);
		this->set_hp(h);*/

	}
	void disp(int i) {
		cout << "[" << i << "]" << "\t" << id << "\t" << level << "\t" << attack << "\t" << hp << endl;
	}
	void disp() {
		cout << id << "(Lv:" << level << ")" << " 공격력 : " << attack << "/" << " 체력 : " << hp << endl;;
	}

	void set_id(const char* id) {
		if (this->id) delete[] this->id;
		this->id = new char[strlen(id) + 1];
		strcpy_s(this->id, strlen(id) + 1, id);
	}
	char* get_id(Player p) {
		return id;
	}
	void set_level(int l) {
		level = l;
	}
	int get_level() {
		return level;
	}
	//void set_attack(int a) {
	//	attack = a;
	//}
	int get_attack() {
		return attack;
	}
	//void set_hp(int h) {
	//	hp = h;
	//}
	int get_hp() {
		return hp;
	}
	
	void levelUp(int n) {

			level = n;
			attack += n * 3;
			hp += n * 10;
		
		
	}
	~Player() {
		delete[] id;
	}
	Player(const Player& p) :id(NULL),level(p.level),attack(p.attack),hp(p.hp) {
		cout << "복사 생성자용" << endl;
		this-> set_id(p.id);
	}


};
//게임 캐릭터 클래스(Player)
//(항목)아이디(id), 레벨(level), 공격력(attack), 체력(hp)
//(함수)disp(정보출력), +@(필요하다면)
//(생성자)알아서
//(특징)	1. 캐릭터 생성시 레벨은 1, 공격력 5, 체력 20
//			2. 레벨이 증가할 경우 공격력은 3, 체력은 10씩 증가
//		아래의 항목을 만드시고 정보 출력
//		id
//[1]	공유		레벨 20으로 변경 후 정보 출력
//[2]	아이유		레벨 15로 변경 후 정보 출력
//[3]	유인나		레벨 30으로 변경 후 정보 출력
class Item {
	char* element;
	int attack;
	double speed;
};
class Long_Sword:public Item { //상속받기
	char* name;

	void basic_attack1(Player p){
		int hp;
		hp = p->get_hp();
	}
};


int main(void) {

	Player p1("공유",20);
	Player p2("아이유", 15);

	p1.disp();

	cout << endl;
	Player p3("유인나");
	p3.disp();
	p3.levelUp(30);
	cout << "**레벨업 후" << endl;
	p3.disp();

	cout << "\n\tID\t" << "LV\t" << "공격력\t" << "체력" << endl;
	p1.disp(1);
	p2.disp(2);
	p3.disp(3);


	return 0;
}