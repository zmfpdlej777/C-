#include<iostream>
using namespace std;
int coffee();
//�Լ� : �������� ����� �����ϴ� �������α׷�
// -���� : ���α׷��� '�� ��ɺ�'�� �����Ͽ� ������ ȿ���� �߱�
// -Ư¡ : ������ ����, ������ ���, ���� ����


int input() { //0~4������ �����ϰ�
	int menu;
	cin >> menu;
	if (menu <= 4 && menu >= 0) return menu;
	else cout << "���� �ʴ� �޴���ȣ�Դϴ�." << endl;
}

int input_coin() {
	int* coin;
	while (1) {
		cout << "��� ���� : ";
		cin >> *coin;
		if (coin > 0)	return *coin;
		else cout << "���� �ƴմϴ�." << endl;
	}
}

void button(int menu,int coin) {
	switch (menu) {
	case 1:
		coin=coffee(coin);
		break;
		
	case 2:
		if (coin < 250) {
			cout << "�ݾ��� �����մϴ�." << endl << endl;
			break;
		}
		else {
			cout << "���ھư� ���Խ��ϴ�." << endl;
			coin -= 250;
			cout << "���� �ݾ��� " << coin << "�� �Դϴ�." << endl << endl;
			break;
		}
	case 3:
		cout << coin << "���� ��ȯ�մϴ�." << endl << endl;
		coin = 0;
		break;
	case 4:
		cout << "���α׷��� �����մϴ�." << endl << endl;
		return;

	}
	system("pause");
	system("cls");

} //����

int coffee(int coin) {
	if (coin < 200) {
		cout << "�ݾ��� �����մϴ�." << endl << endl;
		return coin ;
	}
	else {
		cout << "Ŀ�ǰ� ���Խ��ϴ�." << endl;
		coin -= 200;
		cout << "���� �ݾ��� " << coin << "�� �Դϴ�." << endl << endl;
		return coin;
	}
}

int cocoa(int coin) {
	if (coin < 250) {
		cout << "�ݾ��� �����մϴ�." << endl << endl;
		//�ݾ��� �����ϴٸ� ? ���� ���ְ� �����ϴ���, �Ž������� ��ȯ���ִ���
		return coin;
	}
	else {
		cout << "���ھư� ���Խ��ϴ�." << endl;
		coin -= 250;
		cout << "���� �ݾ��� " << coin << "�� �Դϴ�." << endl << endl;
		return coin;
	}
}

void main_func() {
	int menu;
	int* coin ;
	do{
		if (coin == 0) { coin = *input_coin(); }
		cout << "==================== Ŀ�����Ǳ�==================" << endl;
		cout << "\t1. Ŀ��(200��)  2. ���ھ�(250��)" << endl;
		cout << "\t3. ��ȯ \t4. ����" << endl;
		cout << "\t>>>";
		menu=input();
		button(menu, coin); // <-�� �����ؾ��ҵ�
		//switch (menu) {
		//case 1: //���̽� �ϳ����� �Լ� ����
		//	coin = coffee(coin);
		//	break;
		//case 2:
		//	coin = cocoa(coin);
		//	break;

		//case 3:
		//	cout << coin << "���� ��ȯ�մϴ�." << endl << endl;
		//	coin = 0; //�ܵ��� �����ͷ�. ������ ������Ѷ�
		//	break;
		//case 4:
		//	cout << "���α׷��� �����մϴ�." << endl << endl;
		//	return;
		//	
		//}
		system("pause");
		system("cls");
	} while (1);
}

int main(void) {
	//���
	/*==============Ŀ�����Ǳ�===============
	1.Ŀ��(200��), 2.���ھ�(250��) 3.��ȯ 4.����
	�޴����� : 1
	"Ŀ�ǰ� ���Խ��ϴ�."
	"���� �ݾ��� 800���Դϴ�."
	==============Ŀ�����Ǳ�===============
	1.Ŀ��(200��), 2.���ھ�(250��) 3.��ȯ 4.����
	�޴����� : 2
	"���ھư� ���Խ��ϴ�."
	"���� �ݾ��� 550���Դϴ�."
	==============Ŀ�����Ǳ�===============
	1.Ŀ��(200��), 2.���ھ�(250��) 3.��ȯ 4.����
	�޴����� : 3
	"��ȯ �ݾ��� 550���Դϴ�."

	��� ����:
	==============Ŀ�����Ǳ�===============
	1.Ŀ��(200��), 2.���ھ�(250��) 3.��ȯ 4.����
	�޴����� : 4
	"���Ǳ⸦ �����մϴ�."
	*/

	main_func();



	return 0;
}