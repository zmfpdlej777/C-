#include<iostream>
#include<time.h>
using namespace std;

//rand()
// - ��� ����(seed)�� ���ؼ� 0~ 32767������ ������ �������� ���ϴ� �Լ�
// - seed���� �ٲ����� ������ �ѹ� ����ϸ� ��� �������� ����

//srand()
// - rand�ռ��� seed���� �����ϴ� �Լ�
// - ��ȣ���� �������� �Ű������� �־��־�� �Ѵ�.

//time()
// - 1970�� 1�� 1�� 0�� 0�� 0�ʱ����� �ð��� �� ������ ��ȯ�ϴ� �Լ�
// - �Ű������� NULL ���
// - #time.h

int main(void) {
srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		int s = rand();
		cout << s << endl;;
	}



	return 0;
}

