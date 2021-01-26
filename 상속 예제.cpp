#include<iostream>
using namespace std;

class Super {
public:
	void shinfo() {
		cout << "슈퍼클래스" << endl;
	}


};

class Sub:public Super {
public:
	void shdisp() {
		cout << "서브클래스" << endl;
	}
};

int main(void) {
	Sub s1;
	s1.shdisp();
	s1.shinfo();



	return 0;
}