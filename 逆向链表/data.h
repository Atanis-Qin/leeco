#pragma once
class data
{
public:
	int a;
	data* next;
public:
	data(int a, data* b)
	{
		this->a = a;
		this->next = b;
	}
};

