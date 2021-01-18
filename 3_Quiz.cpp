#include<iostream>
using namespace std;

int student() {
	int s;
	cout << "학생수 입력 :";
	cin >> s;
	return s;
}

double avg(double* ki, int s) {
	double sum=0;
	for (int i = 0; i < s; i++) {
		sum += ki[i];
	}
	double avg = sum / s;
	return avg;
}

void ki_input(double* ki, int s) {

	for (int i = 0; i < s; i++) {
		cout << i+1 << "번째 키 입력 : ";
		cin >> ki[i];
	}
	cout << endl;
	cout << s << "명의 학생의 키 평균은 " << avg(ki,s) << "입니다." << endl;;
}



int main(void) {
	//학생 수 입력 : 5
	// 1번째 키 입력 : ~~~
	// ~~
	// 5번째 키 입력 : ~~
	// 5명의 학생의 키 평균은 173.7입니다.
	int s = student();
	double* ki = new double[s];
	ki_input(ki,s);


	return 0;
}