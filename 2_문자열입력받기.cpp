#include<iostream>

int main(void) {
	//이름을 입력받으십쇼
	char name[20];
	std::cout << "이름 입력 : ";
	//std::cin >> name;

	std::cin.getline(name, sizeof(name));
	// C언어에서의 gets_s와 같은 역할 
	// -> 공백 문자를 기준으로 데이터를 구분하는 것이 아니라,\n을 기준으로 데이터를 구분

	std::cout << "이름 : " << name << std::endl;

	std::cin.get();
	//-> C의 getchar()과 같은 코드 : 문자 하나만 가져감(*\n도 아스키 코드로는 문자)

	std::cin.ignore(5, '\n');
	//버퍼를 5byte만큼 읽어 들이되, \n이 있다면 거기까지만 buffer에서 읽어들여라.
	// -> 대부분 \n을 buffer에서 제거하는 용도로 사용 


	return 0;
}