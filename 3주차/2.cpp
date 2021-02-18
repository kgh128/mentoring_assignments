#include <iostream>
using namespace std;

int main(void) {
	int num=0;
	cout << "숫자를 하나 입력해주세요: ";
	cin >> num;
	for (int i=1; i<=9; i++) 
		cout << num << " X " << i << " = " << num * i << '\n';
}
