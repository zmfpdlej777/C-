#include<iostream>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person() :name(NULL), age(1) {
		cout << "디폴트 생성자" << endl;
	};
	Person(const char* name, int age) :name(NULL) { //생성자
		this->set_name(name);     
		this->set_age(age);
	}
	Person(const Person& ref):name(NULL),age(ref.age) {
		cout << "복사 생성자" << endl;
		this->set_name(ref.name);
		//this->name = ref.name; <┬얕은 복사
		//this->age = ref.age;	  ┘
	}
	~Person() { //소멸자 
		cout << "소멸자 호출" << endl;
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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	void func(Person& p) {//복사 생성자가 쓰일 경우..'매개변수'

	}
	Person func() { //복사 생성자가 쓰일 경우....'반환'
		Person p; //지역변수로 만들어진 객체

		return p; //메인에 지역변수로 만들어진 객체가 나갈수 없으니
	}			  //복사생성자로 복사시켜서 반환시켜줌
};



int main(void) {
	Person* p1 = new Person("야스오",20);
	p1->shinfo(*p1);
	cout << "p1 호출 끝" << endl;
	Person p2(*p1);
	p2.shinfo(p2);

	cout << "그냥 일반으로 만들어보자\n\n\n";
	Person p3("요네",25);
	Person p4;
	//p4 = p3; <-터짐
	p3.func();


	return 0;
}