// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;




int main()
{
	//s1
	//1
	//cout << /*"*/"/*"/*"*/<<endl;
	//cout << "Enter two number!\n";
	//int v1,v2;
	//cin >> v1 >> v2;
	//cout <<"The sum of"<< v1 <<"and"<< v2<<" is "<<v1+v2<<endl;
	//cout << v1 + v2;
	
	//2
	/*
	int sum = 0, val = 50;
	while (val <=100) {
		sum += val;
		++val;
	}
	cout << "the sum is " << sum << endl;
	val = 10;
	while (val--) {
		cout << "\t";
		cout << val << endl;
	}

	int v1 = 0, v2 = 0;
	cout << "please input two int number then will printf the number between the number input"<<endl;
	cin >> v1 >> v2;
	val =(v1 - v2) >= 0 ? v1 : v2;
	while ( val>v1+1||val>v2+1){
		cout << "\t";
		cout << --val<< endl;
	}
	*/

	//3
	/*
	int sum=0,v1=0;
	while (cin >> v1) {  //enter can not end the input
		//cout << "**" << endl;
		sum += v1;
	}
	cout << sum << endl;
	*/

	//4
	/*int currVal = 0, val = 0;
	if (cin >> currVal) {
		int cnt = 1;
		while (cin >> val) {
			if (val==currVal){
				++cnt;
			}
			else {
				cout << "the number " << currVal << "input" << cnt << "times" << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << "the number " << currVal << " input " << cnt << " times" << endl;

	}*/

	//s2
	//1
	/*unsigned u1 = 51;
	int i = -105;
	cout << u1 + i << endl;*/
	/*unsigned u1=32;
	unsigned u2=13;
	cout << u1 - u2 << endl;
	cout << u2 - u1 << endl;
	int i = 13;
	cout << i -u2 << endl;*/
	/*int u1 = 10;
	cout << u1 << endl;
	int u2 = 010;
	cout << u2 << endl;
	int u3 =0x10;
	cout << u3 << endl;*/
	/*cout << "\145  ++ \012" << endl;
	cout << "\062\115\n" << endl;
	cout << "\062\t\115\012" << endl;*/
	
	//over main int i=100;
	/*int i = 42;
	int j = i;*/

	/*int i = 0, sum = 0;
	for (i = 0; i < 10; i++)
		sum += i;
	std::cout << sum;*/
	
	//int l = 3.14;
	////int&rl = 3.14;
	//int &rl = l;
	////int&rll;

	/*int i = 0, &rl = i;
	double d = 0, &r2 = d;
	r2 = 3.1415926;
	i = r2;
	r2 = rl;
	rl = d;*/

	//int i, &ri = i;
	//i = 5;
	//ri = 10;
	//std::cout << i << ri << std::endl;

	//int *pi;
	//int i = 0;
	////pi = i;
	//pi = 0;
	//pi = NULL;
	//pi = nullptr;

	//int i = 42;
	//int*pi=&i;
	//*pi = *pi**pi;
	
	//int i = 0;
	////double *dp = &i;
	////int *pi = i;
	//int*pi = &i;
	
	//int i = 42;
	//int *p;
	//int *&ri = p;
	//ri = &i;
	//*ri = 0;

	//const int bufSize = 512;
	//bufSize = 512;
	
	//int i = 42;
	//const int &r1 = i;
	//const int &r2 = 42;
	//const int &r3 = r1 * 2;
	////int &r4 = r1 * 2;

	//int i = 42;
	//int &r1 = i;
	//const int &r2 = i;
	//r1 = 0;
	////r2 = 0;
	//i = 55;



	printf("hello!");
    return 0;
}

