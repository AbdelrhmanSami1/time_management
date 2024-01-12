#pragma once
#include<iostream>

using namespace std;
class phone
{
	string m_phone_number;
	string m_type;
public:
	phone();
	phone(string, string);
	void set_phone();
	void display_phone();
};

