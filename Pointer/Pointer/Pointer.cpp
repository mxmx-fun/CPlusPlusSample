#include<iostream>
using namespace std;

class School {
public:
	int id;
	int grade;
	School() {
		id = 1;
		grade = 2;
	}
private:
	int t;
};

int main() {
	School m;
	School* school = reinterpret_cast<School*>(&m);
	cout << "id:" << school->id << endl;
	cin.get();
}