#include <iostream>
using namespace std;

class Calculator {
	private:
		int numOfAdd; // 덧셈 횟수
		int numOfMin; // 뺄셈 횟수
		int numOfMul; // 곱셈 횟수
		int numOfDiv; // 나눗셈 횟수

	public:
		void Init();
		double Add(double num1, double num2); // 더하기 함수
		double Min(double num1, double num2); // 빼기 함수
		double Mul(double num1, double num2); // 곱하기 함수
		double Div(double num1, double num2); // 나누기 함수
		void ShowOpCount(); // 연산 횟수 카운트 함수
};

void Calculator::Init() {
	numOfAdd = 0;
	numOfMin = 0;
	numOfMul = 0;
	numOfDiv = 0;
}

double Calculator::Add(double num1, double num2) {
	numOfAdd++;
	return (num1 + num2);
}

double Calculator::Min(double num1, double num2) {
	numOfMin++;
	return (num1 - num2);
}

double Calculator::Mul(double num1, double num2) {
	numOfMul++;
	return (num1 * num2);
}

double Calculator::Div(double num1, double num2) {
	numOfDiv++;
	return (num1 / num2);
}

void Calculator::ShowOpCount() {
	cout << "덧셈: " << numOfAdd;
	cout << " 뺄셈: " << numOfMin;
	cout << " 곱셈: " << numOfMul;
	cout << " 나눗셈: " << numOfDiv;
	cout << '\n';
}

int main(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << '\n';
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << '\n';
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << '\n';
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << '\n';
	cal.ShowOpCount();
}
