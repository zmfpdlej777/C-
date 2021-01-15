#include<iostream>
using namespace std;
//매크로 함수 : define을 이용한 간단한 코드에 함수화
// - 컴파일 이전에 전처리 과정에서 바로 코드로 대치.
// - 장점 : 가독성, 성능 향상
// - 단점 : 구현상 어려움, 디버깅 힘듬
#define SUM(a,b) a+b
#define Big(a,b) a>b? a:b
#define MUL(a,b) a*b

//in-line 함수 : C++버젼의 매크로 함수. 일반 매크로 함수의 구현방식보다 쉽게 지원.
// - 일반 함수 형태 앞에 inline(키워드)만 적어주면 끝
// - 차이점 : 일반 함수는 호출위치에서 함수로 시점을 옮겨 가지만, in-line함수는 함수 내용을 호출한
//			 영역에 복사하여 작동시킨다. 시점이 옮기지 않고 계속 쭉내려간다.
inline int ML(int a, int b) {
	return a * b;
}

int main(void) {
	cout << SUM(1, 2) << endl;
	cout << (Big(2, 3)) << endl;
	cout << MUL(1 + 2, 2 + 1) << endl;
	//		=1+2*2+1
	cout << MUL((1 + 2), (2 + 1)) << endl;
	cout << ML(1 + 2, 2 + 1) << endl;
	return 0;
}