#include<iostream>

int main(void) {
	//1. 10���� ���ڸ� �Է¹޾� ���� ���ض�
	int n, count = 0;

	std::cout << "1. ���� 10�� �Է� : ";
	for (int i = 0; i < 10; i++) {
		std::cin >> n;
		count += n;
	}
	std::cout << "��� : " << count << std::endl;


	//2. �̸��� ������ �Է¹޾� �迭�� �����ϰ� ���
	char name[10];
	char number[15];
	
	std::cout << "\n2. �̸� : ";
	std::cin >> name;
	std::cin.get();
	std::cout << "��ȭ��ȣ(-����): ";
	std::cin.getline(number, sizeof(number));
	
	
	std::cout << "��� : " << name << "(" << number << ")\n";


	//3. ������ ���α׷�, ���ڸ� �Է¹޾�, 99�� ���
	int g;
	std::cout << "\n3. ������ ���? :";
	std::cin >> g;
	if (g > 0) {
		for (int i = 1; i <= 9; i++) {
			std::cout << g << " X " << i << " = " << g * i << std::endl;
		}
	}
	else std::cout << "�����������Դϴ�."<<std::endl;




	return 0;
}