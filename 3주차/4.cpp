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

void Calculator:: Init() {
    
}

double Calculator::Add(double num1, double num2) {
    
}

double Calculator::Min(double num1, double num2) {
    
}

double Calculator::Mul(double num1, double num2) {
    
}

double Calculator::Div(double num1, double num2) {
   
}

void Calculator::ShowOpCount() {
    
}

int main(void){
    Calculator cal;
    
    //  출력 결과와 같은 값이 나오도록 연산 진행
}