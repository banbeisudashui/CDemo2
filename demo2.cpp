#include <iostream>
using namespace std;
void printDemo1();
void whileDemo();
void forDemo();
void cinDemo();
int main()
{
	cout << "Hello World!" << endl;
	//printDemo1();
	//whileDemo();
	//forDemo();
	cinDemo();
}

/**
cout和cin的用法
*/
void printDemo1() {
	cout << "请输入两个数字" << endl;
	int v1 = 0;
	int v2 = 0;
	cin >> v1 >> v2;
	cout << "输入的两个数字是:" << v1 << "和" << v2 << endl;
	cout << "两个数字之和" << v1 + v2 << endl;
}

/**
while示例
*/
void whileDemo() {
	int i = 0;
	int sum = 0;
	while (i < 10) {
		i++;
		sum += i;
	}
	cout << "sum的总和" << sum << endl;
}

/*
for示例
*/
void forDemo() {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += i;
		cout << sum << endl;

	}
}

/*
循环输入，当遇到文件结束符号 ctri+z+enter
*/
void cinDemo() {
	int sum = 0;
	int value = 0;
	while (cin >> value) {
		sum += value;
	}
	cout << sum << endl;

}