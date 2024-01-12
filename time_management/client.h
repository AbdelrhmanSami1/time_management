#pragma once
#include"Project.h"
#include"phone.h"
class client
{
	int id;
	string m_name;
	phone m_phone;
	string m_email;
	string m_note;
	Time m_added_date;
	Project* m_project;
	int m_counter_projects;
public:
	static int c;
	client();
	void set_client();
	void add_project();
	void set_time_sheet();
	void search();
	void display_client_name();
	void display_client();
	void display();
	void display_all_ptoject();


};

