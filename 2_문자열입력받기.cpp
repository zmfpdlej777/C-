#include<iostream>

int main(void) {
	//�̸��� �Է¹����ʼ�
	char name[20];
	std::cout << "�̸� �Է� : ";
	//std::cin >> name;

	std::cin.getline(name, sizeof(name));
	// C������ gets_s�� ���� ���� 
	// -> ���� ���ڸ� �������� �����͸� �����ϴ� ���� �ƴ϶�,\n�� �������� �����͸� ����

	std::cout << "�̸� : " << name << std::endl;

	std::cin.get();
	//-> C�� getchar()�� ���� �ڵ� : ���� �ϳ��� ������(*\n�� �ƽ�Ű �ڵ�δ� ����)

	std::cin.ignore(5, '\n');
	//���۸� 5byte��ŭ �о� ���̵�, \n�� �ִٸ� �ű������ buffer���� �о�鿩��.
	// -> ��κ� \n�� buffer���� �����ϴ� �뵵�� ��� 


	return 0;
}