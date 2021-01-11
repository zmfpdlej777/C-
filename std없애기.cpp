#include<iostream>
using namespace std;

//namespace 
//-배경 : 프로그래밍 팀이 거대화되면서 변수가 겹치는 등의 문제가 발생해 지역,소속의 중요성 대두
//-목적 : 코드의 충돌을 막기 위한 도구. 소속을 명시
namespace ATeam {
	void disp() {
		cout << "A Team용 Disp" << endl;
	}
	void info() {
	std::cout<< "A Team용 Disp" << std::endl;
		}
	}

namespace BTeam {
	void disp() {
		std::cout << "B Team용 Disp" << std::endl;
	}
	void info() {
		std::cout << "B Team용 Disp" << std::endl;
	}
}


int main(void) {
	//using : 우선적으로 검색하여 사용할 함수, namespace를 지정하는 키워드
	//*tip : 지역,전역 변수의 개념이 포함되어 있다. 
	// -사용법 
	//  1) : using 네임스페이스명::함수명 => 지정한 함수를 우선적으로 불러서 사용하는 방식
	using ATeam::disp;
	disp(); //==> Ateam의 disp를 지정했기 때문에 disp()함수를 소환시 항상 Ateam의 disp함수를 가져온다

	//  2) : using namespace 네임스페이스명 => 지정한 네임스페이스 영역을 우선적으로 사용하는 방식
	using namespace BTeam;
	info(); //==> 네임스페이스가 적히지 않을시, 전역적으로 Bteam의 함수를 불러오게 되어있다.

	ATeam::disp(); //namespace내에 함수를 쓰기위해 ::(스코프)를 쓴다.
	BTeam::disp();

	return 0;
}