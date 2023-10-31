#include<iostream>
using namespace std;


int main() {
	//指针指向第一个地址，示例如下。
	int a[3] = {1,2,3};
	int* p = a;
	//结果相等
	cout << "id:" << a[1] << endl;
	cout << "id:" << *(p+1) << endl;
	cin.get();
}