#include<iostream>
#include<time.h>

using namespace std;

//�빮�� ���� �Է� : 100

//***���� ���ĺ� ��� ***
//W Q B E K B F T X Q Y I C W D M
//W O R J E P Q N M Q M K N R C C
//F P R M L Z M F R E S Z G U O I
//F N Y Z S D E L B F R C A V V U
//J T I C E S N P K X S C Q Z A E
//T T A R I K J F G P V Y Z R I K
//K G X T

//A : 00�� B : 00�� D : 00�� F : 00��
//G : 00��........

int input() {
	int su;
	cout << "�빮�� ���� �Է� : ";
	cin >> su;

	return su;
}

void setData(char* pt, int su) {
	for (int i = 0; i < su; i++) {
		pt[i] = rand() % 26 + 65;
	}
}

void disp(char* pt, int su) {
	cout << "***���� ���ĺ� ��� ***" << endl;

	for (int i = 0; i < su; i++) {
		cout << pt[i] << " ";
		if (i % 16 == 15 || i == su - 1) {
			cout << endl;
		}
	}
}

void eaDisp(char* pt, int su) {
	int c = 0;
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		int cnt = 0;
		for (int i = 0; i < su; i++) {
			if (ch == pt[i]) {
				cnt++;
			}
		}

		if (cnt != 0) {
			cout << ch << " : " << cnt << "�� ";
			c++;
			if (c % 4 == 0 || ch == 'Z') {
				cout << endl;
			}
		}
		else if (ch == 'Z' && c % 4 != 0) {
			cout << endl;
		}

	}
}

int main(void) {

	srand((unsigned)time(NULL));

	int su = input();

	char* pt = new char[su];
	setData(pt, su);

	disp(pt, su);
	
	eaDisp(pt, su);

	delete[] pt;

	return 0;
}