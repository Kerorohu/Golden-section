// Golden section.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;
float goldSection(float a, float b,float theta);
float f(float x);


int main()
{
	float reslut = 0;
	reslut = goldSection(0, 10, 0.2);
	cout << "reslut is " << reslut << endl;
	getchar();
}

float f(float x) {
	return (x - 3) * (x - 3);
}

float goldSection(float a, float b, float theta ) {
	
	float a1, a2, f1, f2;
	a1 = b - (0.618 * (b - a));
	a2 = a + (0.618 * (b - a));

	f1 = f(a1);
	f2 = f(a2);

	cout << "a1*= " << a1 << endl;
	cout << "a2*= " << a2 << endl;
	cout << "f1*= " << f1 << endl;
	cout << "f2*= " << f2 << endl;
	float xa, xb;

	while (b-a>theta)
	{
		if (f1 < f2) {
			b = a2;
			a2 = a1;
			f2 = f1;
			a1 = b - (0.618 * (b - a));
			f1 = f(a1);
			xb = b;
			xa = a2;
			cout << "f1 < f2 "  << endl;
		}
		else {
			a = a1;
			a1 = a2;
			f1 = f2;
			a2 = a + (0.618 * (b - a));
			f2 = f(a2);
			cout << "f1 > f2 " << endl;

			xb = a1;
			xa = a;
		}
		cout << "a1= " << a1 << endl;
		cout << "a2= " << a2 << endl;
		cout << "f1= " << f1 << endl;
		cout << "f2= " << f2 << endl;
		cout << "b= " << b << endl;
		cout << "a= " << a << endl;
		cout << "b-a= " << b - a << endl;
	}
	
	return (xa + xb) / 2;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
