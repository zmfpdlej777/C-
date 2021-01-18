#include<iostream>
using namespace std;

int main(void) {
	int* num = new int(5);
	//C++용 초기화스타일을 접목. 동적할당 초기화가 가능

	double* db = new double; //마찬가지로 new double(3.141592); ㄱㄴ
	*db = 3.141592;

	//이부분 중요!!!!!
	char* ch = new char[strlen("안녕하세요") + 1]; // =배열크기 계산법+NULL값 
	strcpy_s(ch, strlen("안녕하세요") + 1, "안녕하세요"); //strcpy_s(배열명,배열크기,넣을 char)
	cout << ch << endl;
	//계속 쓰임!!!!!!!

	struct info {
		char name[10];
		int age;
	};
	info* people = new info{ "홍길동",20 };
	cout << people->name << endl;
	cout << people->age << endl;


	delete num,db,people;
	//delete db;
	delete[] ch;
	//delete[] ch2;

	return 0;
}