#include<iostream>
using namespace std;


int main() {
	//指针指向第一个地址，示例如下。
	int a[3] = {1,2,3};
	int* p = &a[1];
	int& t = a[1];
	t = 3;
	*p = 4;
	//结果相等 
	cout << "id:" << *(p+1) << endl;
	cout << "id:" << t << endl;
	cout << "id:" << a[1] << endl;
	cin.get();
}