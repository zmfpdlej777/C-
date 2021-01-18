#include<iostream>
#include<time.h>
using namespace std;
//대문자 갯수 입력 : 100개
// 랜더 ㅁ알파벳출력~~~~~
// A: ~개, B: ~개, C: ~개, D:~개
// E:개~ 
//만약 갯수가 0개라면 제외, 알파벳은 4개씩 출력
//65~90 총26

int input() { //여기 동적할당 처리
	int n;
	cout << "대문자 갯수 입력 : ";
	cin >> n;
	return n;
}

void count(int ran) {
	int count = 0;
	char word = ran;
	for (int i = 65; i <= 90; i++) {
		if (ran = i) {
			count++;
			if (count == 0) continue;
		}

	}

		cout << word << " : " << count << "개 ";
}

int count2(int ran) {
	int count = 0;
	if (ran == 65) count++;
	return count;
}

void shword(int n) {
	srand((unsigned)time(NULL));
	int raw = 0;
	int Acount = 0;
	cout << "**랜덤 알파벳 출력**" << endl;
	for (int i = 0; i < n; i++) {
		int ran = rand() % 26 + 65;
		char a=ran;
		cout << a << " ";
		raw++;
		if (n%10==0)	if (raw >= 10) cout<<endl, raw=0;
		//if (n%5==0)	if (raw >= 5) cout<<endl, raw=0;
		Acount = count2(ran);
		//count(ran);

	}
	cout << endl;
	cout << "A : " << Acount << "개 ";
}



int main(void) {
	int* n = new int;
	*n= input();
	shword(*n);

	return 0;
}