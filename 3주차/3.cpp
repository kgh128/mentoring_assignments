#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void) {
	int randNum = 0;
	srand(time(NULL));
	for (int i=0; i<5; i++) {
		randNum = rand()%100;
		cout << randNum << ' ';
	}
	cout << '\n';
}
