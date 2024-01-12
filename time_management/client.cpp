#include "client.h"
int client::c = 0;
client::client()
	:m_name("unnown"), m_phone(), m_email("unnown"), m_note("unnown"), m_added_date(0, 0, 0, 0), m_counter_projects(-1)
{
	c++;
	id = c;
	m_project = new Project[10];
}
void client::set_client()
{
	cout << "Name:";
	cin >> m_name;
	m_phone.set_phone();
	cout << "Email:";
	cin >> m_email;
	cout << "Note:";
	cin >> m_note;
	cout << "Added Date ";
	m_added_date.set_date();
}
void client::add_project()
{
	m_counter_projects++;
	m_project[m_counter_projects].set_project();
}
void client::set_time_sheet()
{
	int x;
	cout << "[";
	for (int i = 0; i <= m_counter_projects; i++)
	{
		cout << i+1 << "-" << m_project[i].get_name() << " ";
	}
	cout << "]...";
	cin >> x;
	m_project[x-1].set_time_sheet();	
}
void client::search()
{
	string s;
	cout << "Project name:";
	cin >> s;
	for (int i = 0; i < m_counter_projects; i++)
		if (s == m_project[i].get_name())
			m_project[i].display();
		else
			cout << "Not Fonuded\n";
}
void client::display_client_name()
{
	cout << m_name;
}
void client::display_client()
{
	cout <<"=============" << m_name << "[" << id << "]============" << endl;
	m_phone.display_phone();
	cout << "Email:" << m_email << endl;
	cout << "Note:" << m_note << endl;
	m_added_date.display_date();
	cout << "--------------------------------------\n";
}
void client::display()
{
	cout << "======================" << m_name << "[" << id << "]======================\n";
	//cout << "Phone:";
	m_phone.display_phone();
	cout << "Email:" << m_email << endl;
	cout << "Note:" << m_note << endl;
	for (int i = 0; i <= m_counter_projects; i++)
	{
		m_project[i].display();
	}
}	
void client::display_all_ptoject()
{
	for (int i = 0; i <= m_counter_projects; i++)
	{
		m_project[i].display();
	}
}


