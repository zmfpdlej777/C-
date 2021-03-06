//프로그램 운용중의 메모리 구조
//1. Code : 기계어로 변역된 코드가 저장되는 영역 = 함수가 정의되어 있는 영역. *this

//2. Data : 전역 변수 및 스태틱 변수가 저장되는 영역
// - 프로그램 실행 중에 공간이 생성되고, 프로그램이 끝날 때 공간이 소멸
// - 때문에 우리가 공간의 생성 및 소멸 시기를 결정할 수 없다.
// *스태틱 : 소속이있는 전역변수

//3. Stack
// - 지역변수 및 매개변수가 저장되는 영역, 함수의 호출 및 종료를 담당하는 영역
// - 지역이 실행할때 공간이 생성, 지역이 끝날 때 공간 소멸 =>때문에  생성, 소멸시기를 결정할 수없다.

//4. Heap
// - 프로그램 운용 중에 사용자 필요에 의해서 공간을 생성하고 소멸시킬 수 있는 영역
// => 때문에 직접 공간의 생성 및 소멸시기를 결정할 수 있는 영역. *동적할당이 이루어지는 영역

//동적할당
// - 프로그램 운용 중에 사용자 필요에 의해서 공간을 생성하고 소멸시키는 작업