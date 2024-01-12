#pragma once
#include"client.h"
class client_book
{
	client* m_client;
	int m_counter;
public:
	client_book();
	void add_client();
	void add_project();
	void set_time_sheet();
	void displat_time_sheet();
	void display_all_client();
	void display_all_ptojects();
	
};

