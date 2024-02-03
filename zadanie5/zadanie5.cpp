// zadanie5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "func.h"
using namespace std;


void TwoIntAverage() {
	int firstInt, secondInt;
	cout << "Введите первое число int\n";
	cin >> firstInt;
	cout << "Введите второе число int\n";
	cin >> secondInt;
	cout <<"Среднее арифметическое: " << Average(firstInt, secondInt) << endl;
}

void ThreeIntAverage() {
	int firstInt, secondInt,thirdInt;
	cout << "Введите первое число int\n";
	cin >> firstInt;
	cout << "Введите второе число int\n";
	cin >> secondInt;
	cout << "Введите третье число int\n";
	cin >> thirdInt;
	cout << "Среднее арифметическое: " << Average(firstInt, secondInt) << endl;
}
void ThreeFloatAverage() {
	float firstFloat, secondFloat,thirdFloat;
	cout << "Введите первое число float\n";
	cin >> firstFloat;
	cout << "Введите второе число float\n";
	cin >> secondFloat;
	cout << "Введите третье число float\n";
	cin >> thirdFloat;
	cout << "Среднее арифметическое: " << Average(firstFloat, secondFloat,thirdFloat) << endl;
}

void TwoDoubleAverage() {
	int firstDouble, secondDouble;
	cout << "Введите первое число int\n";
	cin >> firstDouble;
	cout << "Введите второе число int\n";
	cin >> secondDouble;
	cout << "Среднее арифметическое: " << Average(firstDouble, secondDouble)<<endl;
}
int main(void)
{
	setlocale(LC_ALL, "ru");
	int choise = 0;
	while (choise != 5){
		cout << "Выберите значения, среднее арифметическое которых хотите узнать\n";
		cout << "1: 2 числа int\n";
		cout << "2: 3 числа int\n";
		cout << "3: 3 числа float\n";
		cout << "4: 2 числа double"<<endl;	
		cout << "5: выйти из программы"<<endl;	
		cin >> choise;
		
		switch (choise) {
		case 1:
			TwoIntAverage();
			break;
		case 2:
			ThreeIntAverage();
			break;
		case 3:
			ThreeFloatAverage();
			break;
		case 4:
			TwoDoubleAverage();
			break;
		case 5:
			return 0;
		default:
			cout << "Неверный выбор. Попробуйте снова.\n";
			break;
		}
		
	}
}


