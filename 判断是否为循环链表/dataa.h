#pragma once
#include <iostream>
using namespace std;

class dataa
{
public:
	int a;
	dataa* next;
public:
	dataa(int a, dataa* b)
	{
		this->a = a;
		this->next = b;
	}
	~dataa()
	{
		cout << "�ڴ�" << this->a << "������" << endl;
	}
};

