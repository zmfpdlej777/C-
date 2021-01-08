#include<iostream>

int main(void) {
	//1. 10개의 숫자를 입력받아 합을 구해라
	int n, count = 0;

	std::cout << "1. 숫자 10번 입력 : ";
	for (int i = 0; i < 10; i++) {
		std::cin >> n;
		count += n;
	}
	std::cout << "결과 : " << count << std::endl;


	//2. 이름과 전번을 입력받아 배열을 저장하고 출력
	char name[10];
	char number[15];
	
	std::cout << "\n2. 이름 : ";
	std::cin >> name;
	std::cin.get();
	std::cout << "전화번호(-포함): ";
	std::cin.getline(number, sizeof(number));
	
	
	std::cout << "결과 : " << name << "(" << number << ")\n";


	//3. 구구단 프로그램, 숫자를 입력받아, 99단 출력
	int g;
	std::cout << "\n3. 구구단 몇단? :";
	std::cin >> g;
	if (g > 0) {
		for (int i = 1; i <= 9; i++) {
			std::cout << g << " X " << i << " = " << g * i << std::endl;
		}
	}
	else std::cout << "안좋은정수입니다."<<std::endl;




	return 0;
}