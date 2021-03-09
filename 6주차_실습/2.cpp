#include <iostream>
#include <string>
using namespace std;

class Printer {
	private:
		string str;

	public:
		void SetString(string);
		void ShowString();
};

void Printer::SetString(string tmp) {
	str = tmp;
}

void Printer::ShowString() {
	cout << str << '\n';
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello World");
	pnt.ShowString();

	pnt.SetString("I Love C++");
	pnt.ShowString();

	return 0;
}
