#include<iostream>
#include<conio.h>
using namespace std;

void Menu() {
	cout << "======MXMX  Counter======\n";
	cout << "====== 1.   Add    ======\n";
	cout << "====== 2. subtract ======\n";
	cout << "====== 3. multiply ======\n";
	cout << "====== 4.  divide  ======\n";
	cout << "=========================\n";
	cout << "print function id to use \n";
}

int SaveParam(bool isFirst) {
	if (isFirst) {
		cout << "Please print First number\n";
		int a;
		cin >> a;
		return a;
	}
	else {
		cout << "Please print Second number\n";
		int b;
		cin >> b;
		return b;
	}
}

void AddFunciton() {
	int a = SaveParam(true);
	int b = SaveParam(false);
	cout << a << " add " << b << " = " << a + b << endl;
}

void SubtractFunction() {
	int a = SaveParam(true);
	int b = SaveParam(false);
	cout << a << " minus " << b << " = " << a - b << endl;
}

void MultiplyFunction() {
	int a = SaveParam(true);
	int b = SaveParam(false);
	cout << a << " multiply " << b << " = " << a * b << endl;
}

void DivideFunction() {
	int a = SaveParam(true);
	int b = SaveParam(false);
	cout << a << " divide " << b << " = " << a / b << endl;
}

int main() {
	while (true) {
		string cmd;
		Menu();
		cin >> cmd;
		if (cmd == "1") {
			AddFunciton();
		}
		else if (cmd == "2") {
			SubtractFunction();
		}
		else if (cmd == "3") {
			MultiplyFunction();
		}
		else if (cmd == "4") {
			DivideFunction();
		}
		else {
			cout << "Please enter a valid function id." << endl;
		}
		cout << "Print Any Key to Continue" << endl;
		_getch();
		system("cls");
	}
}

