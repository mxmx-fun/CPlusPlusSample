#include<iostream>
using namespace std;

class Animal {
public:
	string name;

	//构造函数
	Animal() {}
	Animal(string name) {
		this->name = name;
	}

	//析构函数
	~Animal() {
		cout << "Destroy" <<  this -> name << endl;
	}
};

template<class T>
class Repo {
public:
	T* list;
	int index;
	int capcity;

	Repo() {
		list = new T[4];
		index = 0;
		capcity = 4;
	};

	Repo(int capcity) {
		list = new T[capcity];
		index = 0;
		this->capcity = capcity;
	}

	void Add(T item) {
		if (index < capcity) {
			list[index++] = item;
		}
	}
};


int main() {
	//=====Ctor & Dector=====
	//Animal* tiger = new Animal("Tiger");
	//cout << "You create Animal:" << tiger->name << endl;
	//delete tiger;
	//cin.get();

	//=====Sample Class=====
	Repo<int> numRepo;
	numRepo.Add(1);
	cout << "load num:" << numRepo.list[0] << endl;
    cin.get();
	return 0;
}

