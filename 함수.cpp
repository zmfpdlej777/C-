#include<iostream>
using namespace std;

int input() {
	int n;
	cout << "���� �Է� : ";
	cin >> n;
	return n;

}

int  reverse(int n) {
	int r;
	if (n != 0) {
		r = -n;
		return r;
	}
	else {
		cout << "�ùٸ� ������ �ƴմϴ�." << endl;
		return 0;
	}
		//cout << "��� : " << n << endl;	
}

//int reverse(int n) {
//	int r;
//
//	if (n%1>0&&n%1<1) {
//		cout << "�ùٸ� ������ �ƴմϴ�." << endl;
//		return 0;
//	}
//	else {
//		r = -n;
//		return r;
//	}
//}


int main(void) {
	//reverse()�Լ��� ���� �Է¹��� �Լ��� ������ ���ض�
	//����� main
	int i = input();
	int r = reverse(i);
	
	cout <<input() << "�� ������ " <<r <<"�Դϴ�."<< endl;

	//�ذ��
	//�Լ��� ������ �ƴ϶� �ʼ���.
	//��� �����ؾ� ���� �𸣰����� main�� ���� �ۼ� ��, void���·� �Լ��� ���� ��, ����� �����ض�. return�� �˾Ƽ�
	//���Ŀ��� ���� ���ο� ���� �׸��°� �ƴ϶� �ٷ� �Լ��� �ۼ��� �� �ְ� �غ���.
	
	return 0;
}