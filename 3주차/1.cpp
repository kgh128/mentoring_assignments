#include <iostream>
using namespace std;

int main(void) {
	int num[5] = {0};
	for (int i=0; i<5; i++) {
		cout << i+1 << "번째  정수 입력: ";
		cin >> num[i];
	}
	cout << "합계: " << num[0] + num[1] + num[2] + num[3] + num[4] << '\n';
}
