#include<iostream>
using namespace std;

int student() {
	int s;
	cout << "�л��� �Է� :";
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
		cout << i+1 << "��° Ű �Է� : ";
		cin >> ki[i];
	}
	cout << endl;
	cout << s << "���� �л��� Ű ����� " << avg(ki,s) << "�Դϴ�." << endl;;
}



int main(void) {
	//�л� �� �Է� : 5
	// 1��° Ű �Է� : ~~~
	// ~~
	// 5��° Ű �Է� : ~~
	// 5���� �л��� Ű ����� 173.7�Դϴ�.
	int s = student();
	double* ki = new double[s];
	ki_input(ki,s);


	return 0;
}