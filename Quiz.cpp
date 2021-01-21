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
		cout << "====�⺻ ������====" << endl;
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
		cout << id << "(Lv:" << level << ")" << " ���ݷ� : " << attack << "/" << " ü�� : " << hp << endl;;
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
		cout << "���� �����ڿ�" << endl;
		this-> set_id(p.id);
	}


};
//���� ĳ���� Ŭ����(Player)
//(�׸�)���̵�(id), ����(level), ���ݷ�(attack), ü��(hp)
//(�Լ�)disp(�������), +@(�ʿ��ϴٸ�)
//(������)�˾Ƽ�
//(Ư¡)	1. ĳ���� ������ ������ 1, ���ݷ� 5, ü�� 20
//			2. ������ ������ ��� ���ݷ��� 3, ü���� 10�� ����
//		�Ʒ��� �׸��� ����ð� ���� ���
//		id
//[1]	����		���� 20���� ���� �� ���� ���
//[2]	������		���� 15�� ���� �� ���� ���
//[3]	���γ�		���� 30���� ���� �� ���� ���
class Item {
	char* element;
	int attack;
	double speed;
};
class Long_Sword:public Item { //��ӹޱ�
	char* name;

	void basic_attack1(Player p){
		int hp;
		hp = p->get_hp();
	}
};


int main(void) {

	Player p1("����",20);
	Player p2("������", 15);

	p1.disp();

	cout << endl;
	Player p3("���γ�");
	p3.disp();
	p3.levelUp(30);
	cout << "**������ ��" << endl;
	p3.disp();

	cout << "\n\tID\t" << "LV\t" << "���ݷ�\t" << "ü��" << endl;
	p1.disp(1);
	p2.disp(2);
	p3.disp(3);


	return 0;
}