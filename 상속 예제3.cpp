#include<iostream>

using namespace std;

class Info {
private:
	char* name;
	int age;

public:
	//생성자
	Info() : name(NULL), age(1) {
		cout << "부모 디폴트 생성자 호출" << endl;
	}

	Info(const char* name) : name(NULL) {
		this->setName(name);
		this->setAge(age);
	}

	Info(const char* name, int age) : name(NULL) {
		cout << "부모 생성자 호출" << endl;
		this->setName(name);
		this->setAge(age);
	}

	//복사 생성자
	Info(const Info& ref) : name(NULL), age(ref.age) {
		cout << "부모 복사 생성자 호출" << endl;
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
			cout << "나이가 잘못입력되었습니다..." << endl;
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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	//소멸자
	~Info() {
		cout << "부모 소멸자 호출" << endl;
		delete[] name;
	}

};
class NewInfo :public Info {
private:
	double ki;
public:
	//생성자
	NewInfo() {
		cout << "자식 기본 생성자 호출" << endl;
	}
	//부모 멤버변수의 초기화시, 자식클래스에서 매개변수로 받아주어야 한다.(자식 멤버변수만으로 객체 생성X)
	NewInfo(double ki) :ki(ki) {
		cout << "자식 생성자 호출" << endl;
	}
	//**자식클래스에서 별다른 명시를 하지 않으면 자동으로 부모의 디폴트 생성자를 호출
	//때문에 자식 클래스에서 부모의 생성자를 선택하여 콜른 초기화를 통해 호출 가능
	NewInfo(const char* name,int age,double ki) :Info(name,age),ki(ki) {
		cout << "부모자식 생성자 호출" << endl;  //↑콜른 초기화
	}
	NewInfo(NewInfo& p):Info(p),ki(p.ki) {
		cout << "복사 생성자" << endl;
	}

	//메서드
	void set_ki(double k) {
		ki = k;
	}
	double get_ki() const {
		return ki;
	}
	//함수의 오버라이드
	void disp() const {
		Info::disp(); //클래스를 통해서 부모의 함수를 실행함.
		//cout << "이름 : " << getName() << endl;
		//cout << "나이 : " << getAge() << endl;
		cout << "키 : " << ki << endl;
	}


	//소멸자는 동적할당에 의해 구별된다. == 서브클래스에 동적할당이 있다면 그것을 위한 소멸자를 써라.
	~NewInfo() {
		cout << "자식 소멸자 호출" << endl;
	}
};


int main(void) {
	NewInfo n; // 순서 : 부모공간 생성 > 자식공간  생성 > 자식공간 삭제 > 부모공간 삭제 
	cout << "===================================================" << endl;

	NewInfo n2("야스오",26,177.7);
	n2.disp();

	return 0;
}