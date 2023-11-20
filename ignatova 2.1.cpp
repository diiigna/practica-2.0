 
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num1;
	int num2;
	int result;
	cout << "Ведите первое число:";
	cin >> num1;
	cout << "Введите второе число:";
	cin >> num2;
	cout << "Какой результат умножения этих 2х чискел?";
	cin >> result;
	if (result == num1 * num2) {
		cout << "ура, верно!!!";
	}
	else {
		cout << "Фу, неверно!!!";
	}
	return 0;
}

