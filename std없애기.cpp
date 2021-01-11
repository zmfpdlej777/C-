#include<iostream>
using namespace std;

//namespace 
//-��� : ���α׷��� ���� �Ŵ�ȭ�Ǹ鼭 ������ ��ġ�� ���� ������ �߻��� ����,�Ҽ��� �߿伺 ���
//-���� : �ڵ��� �浹�� ���� ���� ����. �Ҽ��� ���
namespace ATeam {
	void disp() {
		cout << "A Team�� Disp" << endl;
	}
	void info() {
	std::cout<< "A Team�� Disp" << std::endl;
		}
	}

namespace BTeam {
	void disp() {
		std::cout << "B Team�� Disp" << std::endl;
	}
	void info() {
		std::cout << "B Team�� Disp" << std::endl;
	}
}


int main(void) {
	//using : �켱������ �˻��Ͽ� ����� �Լ�, namespace�� �����ϴ� Ű����
	//*tip : ����,���� ������ ������ ���ԵǾ� �ִ�. 
	// -���� 
	//  1) : using ���ӽ����̽���::�Լ��� => ������ �Լ��� �켱������ �ҷ��� ����ϴ� ���
	using ATeam::disp;
	disp(); //==> Ateam�� disp�� �����߱� ������ disp()�Լ��� ��ȯ�� �׻� Ateam�� disp�Լ��� �����´�

	//  2) : using namespace ���ӽ����̽��� => ������ ���ӽ����̽� ������ �켱������ ����ϴ� ���
	using namespace BTeam;
	info(); //==> ���ӽ����̽��� ������ ������, ���������� Bteam�� �Լ��� �ҷ����� �Ǿ��ִ�.

	ATeam::disp(); //namespace���� �Լ��� �������� ::(������)�� ����.
	BTeam::disp();

	return 0;
}