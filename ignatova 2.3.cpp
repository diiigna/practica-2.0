
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int mas[7];
	mas[1] = 1;
	mas[2] = 2;
	mas[3] = 3;
	mas[4] = 4;
	mas[5] = 5;
	mas[6] = 6; 
	int sum = 0;
	for (int i = 0; i <= 6; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	cout << "Сумма нечетных чисел:" << sum << endl;
}

