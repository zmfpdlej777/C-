#include<iostream>

using namespace std;

class Bumo {
private:
	int a;
protected:
	int b;
public:
	int c;
};

class JaSik : public Bumo {
private:
	int d;
protected:
	int e;
public:
	int f;

	void disp() {
		cout << a << b << c << d << e << f << endl;
	}
};

class SonJa : public JaSik {
public:

	void disp() {
		cout << a << b << c << d << e << f << endl;
	}
};

int main(void) {

	JaSik j;

	cout << j.a << j.b << j.c << j.d << j.e << j.f << endl;

}
