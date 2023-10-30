#include<iostream>
using namespace std;

class Student {
public:
    union id {
        int number;
        char name;
        id(int number, char name) {
            this->number = number;
            this->name = name;
        }
    } ID;

    Student(int number, char name):ID(number,name){
    }
};

union Teacher {
    long idnum;
    int id;

    Teacher(long id, int idnum) {
        this->id = id;
        this->idnum = idnum;
    }
};

int main() {
    char a = '1';
	Student mxmx(1,a);
	cout << mxmx.ID.name << endl;
	cout << mxmx.ID.number << endl;

    Teacher teacher(2,1);
    cout << teacher.id<< endl;
    cout << teacher.idnum << endl;
	cin.get();
}

