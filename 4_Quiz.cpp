#include<iostream>
#include<time.h>
using namespace std;
//�빮�� ���� �Է� : 100��
// ���� �����ĺ����~~~~~
// A: ~��, B: ~��, C: ~��, D:~��
// E:��~ 
//���� ������ 0����� ����, ���ĺ��� 4���� ���
//65~90 ��26

int input() { //���� �����Ҵ� ó��
	int n;
	cout << "�빮�� ���� �Է� : ";
	cin >> n;
	return n;
}

void count(int ran) {
	int count = 0;
	char word = ran;
	for (int i = 65; i <= 90; i++) {
		if (ran = i) {
			count++;
			if (count == 0) continue;
		}

	}

		cout << word << " : " << count << "�� ";
}

int count2(int ran) {
	int count = 0;
	if (ran == 65) count++;
	return count;
}

void shword(int n) {
	srand((unsigned)time(NULL));
	int raw = 0;
	int Acount = 0;
	cout << "**���� ���ĺ� ���**" << endl;
	for (int i = 0; i < n; i++) {
		int ran = rand() % 26 + 65;
		char a=ran;
		cout << a << " ";
		raw++;
		if (n%10==0)	if (raw >= 10) cout<<endl, raw=0;
		//if (n%5==0)	if (raw >= 5) cout<<endl, raw=0;
		Acount = count2(ran);
		//count(ran);

	}
	cout << endl;
	cout << "A : " << Acount << "�� ";
}



int main(void) {
	int* n = new int;
	*n= input();
	shword(*n);

	return 0;
}