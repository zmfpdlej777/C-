#include<iostream>
using namespace std;

class Super {
public:
	void shinfo() {
		cout << "����Ŭ����" << endl;
	}


};

class Sub:public Super {
public:
	void shdisp() {
		cout << "����Ŭ����" << endl;
	}
};

int main(void) {
	Sub s1;
	s1.shdisp();
	s1.shinfo();



	return 0;
}