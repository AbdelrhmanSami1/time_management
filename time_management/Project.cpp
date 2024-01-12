#include "Project.h"

Project::Project() :m_name("unnown"), m_describtion("unnown"), m_deadline(0, 0, 0, 0)
{
}

void Project::set_name()
{
	cin.ignore();
	getline(cin, m_name);
}

string Project::get_name()
{
	return m_name;
}

void Project::set_describtion()
{
	cin.ignore();
	getline(cin, m_describtion);
}

void Project::set_deadline()
{
	m_deadline.set_date();
}


Time Project::get_deadline()
{
	return m_deadline;
}

void Project::set_time_sheet()
{
	cout << "Enter the Start ";
	m_ts.set_start();
	cout << "Enter the End ";
	m_ts.set_end();
}

void Project::set_project()
{
	cout << "Title of project: ";
	set_name();
	cout << "Describtion: ";
	set_describtion();
	cout << "Deadline ";
	set_deadline();
}

bool Project::is_deadline_pass()
{
	Time t= m_ts.last_date();
	return m_deadline.is_pass(t);
}

void Project::display()
{
	cout << "Project:" << m_name << endl;
	cout << "Describtion:" << m_describtion << endl;
	m_deadline.display_date();
	cout << "\n----------------------------------------------------\n";
	
	m_ts.display();
}
