#include<iostream>

int main(void) {
	//나이 입력받아 출력

	int n;
	std::cout << "나이 입력: ";
	//scanf_s("%d", &n); 'C'
	//SDL : sucurity development 검사, scanf를 사용할지 말지 선택하는것. scanf는 _s보다 보안성이 떨어진다. '웬만하면 _s써라'

	std::cin >> n; //'C++'
	//cin : c++에서의 '표준 입력 객체'
	// -형태 : std::cin >>입력대상>>입력대상....;


	//>>(=우측 쉬프트 연산자) : 입력대상을 구분하는 기호(*cin옆에 있다면)
	//*입력대상에 자료형을 자동으로 검색하여 입력 받는다.

	std::cout << "나이 : " << n << std::endl;




	return 0;
}