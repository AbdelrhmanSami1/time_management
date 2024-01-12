#pragma once
#include<iostream>
using namespace std;
#include"Time.h"
class time_sheet
{
	Time *m_start;
	Time *m_end;
	Time *m_duration;
	Time m_sum;
	int c;
public:
	time_sheet();
	void set_start();
	void set_end();
	Time last_date();
	void display();
	
};

