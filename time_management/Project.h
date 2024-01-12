#pragma once
#include"time_sheet.h"
#include<iostream>
using namespace std;
#include<string>
class Project
{
	string m_name;
	string m_describtion;
	time_sheet m_ts;
	Time m_deadline;
public:
	Project();
	void set_name();
	string get_name();
	void set_describtion();
	void set_deadline();
	Time get_deadline();
	void set_time_sheet();
	void set_project();
	bool is_deadline_pass();
	void display();

};

