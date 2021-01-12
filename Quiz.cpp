#include<iostream>
using namespace std;
int coffee();
//함수 : 독립적인 기능을 실행하는 작은프로그램
// -목적 : 프로그램을 '각 기능별'로 구분하여 구조적 효율성 추구
// -특징 : 독립적 실행, 고유한 기능, 재사용 가능


int input() { //0~4까지만 가능하게
	int menu;
	cin >> menu;
	if (menu <= 4 && menu >= 0) return menu;
	else cout << "맞지 않는 메뉴번호입니다." << endl;
}

int input_coin() {
	int* coin;
	while (1) {
		cout << "요금 투입 : ";
		cin >> *coin;
		if (coin > 0)	return *coin;
		else cout << "돈이 아닙니다." << endl;
	}
}

void button(int menu,int coin) {
	switch (menu) {
	case 1:
		coin=coffee(coin);
		break;
		
	case 2:
		if (coin < 250) {
			cout << "금액이 부족합니다." << endl << endl;
			break;
		}
		else {
			cout << "코코아가 나왔습니다." << endl;
			coin -= 250;
			cout << "현재 금액은 " << coin << "원 입니다." << endl << endl;
			break;
		}
	case 3:
		cout << coin << "원을 반환합니다." << endl << endl;
		coin = 0;
		break;
	case 4:
		cout << "프로그램을 종료합니다." << endl << endl;
		return;

	}
	system("pause");
	system("cls");

} //굳이

int coffee(int coin) {
	if (coin < 200) {
		cout << "금액이 부족합니다." << endl << endl;
		return coin ;
	}
	else {
		cout << "커피가 나왔습니다." << endl;
		coin -= 200;
		cout << "현재 금액은 " << coin << "원 입니다." << endl << endl;
		return coin;
	}
}

int cocoa(int coin) {
	if (coin < 250) {
		cout << "금액이 부족합니다." << endl << endl;
		//금액이 부족하다면 ? 돈을 더넣게 유도하던지, 거스름돈을 반환해주던지
		return coin;
	}
	else {
		cout << "코코아가 나왔습니다." << endl;
		coin -= 250;
		cout << "현재 금액은 " << coin << "원 입니다." << endl << endl;
		return coin;
	}
}

void main_func() {
	int menu;
	int* coin ;
	do{
		if (coin == 0) { coin = *input_coin(); }
		cout << "==================== 커피자판기==================" << endl;
		cout << "\t1. 커피(200원)  2. 코코아(250원)" << endl;
		cout << "\t3. 반환 \t4. 종료" << endl;
		cout << "\t>>>";
		menu=input();
		button(menu, coin); // <-얘 구현해야할듯
		//switch (menu) {
		//case 1: //케이스 하나마다 함수 구현
		//	coin = coffee(coin);
		//	break;
		//case 2:
		//	coin = cocoa(coin);
		//	break;

		//case 3:
		//	cout << coin << "원을 반환합니다." << endl << endl;
		//	coin = 0; //잔돈은 포인터로. 원형을 변경시켜라
		//	break;
		//case 4:
		//	cout << "프로그램을 종료합니다." << endl << endl;
		//	return;
		//	
		//}
		system("pause");
		system("cls");
	} while (1);
}

int main(void) {
	//출력
	/*==============커피자판기===============
	1.커피(200원), 2.코코아(250원) 3.반환 4.종료
	메뉴선택 : 1
	"커피가 나왔습니다."
	"현재 금액은 800원입니다."
	==============커피자판기===============
	1.커피(200원), 2.코코아(250원) 3.반환 4.종료
	메뉴선택 : 2
	"코코아가 나왔습니다."
	"현재 금액은 550원입니다."
	==============커피자판기===============
	1.커피(200원), 2.코코아(250원) 3.반환 4.종료
	메뉴선택 : 3
	"반환 금액은 550원입니다."

	요금 투입:
	==============커피자판기===============
	1.커피(200원), 2.코코아(250원) 3.반환 4.종료
	메뉴선택 : 4
	"자판기를 종료합니다."
	*/

	main_func();



	return 0;
}