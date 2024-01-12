#include "client_book.h"

client_book::client_book()
{
	m_client = new client[100];
	m_counter = -1;
}

void client_book::add_client()
{
	m_counter++;
	m_client[m_counter].set_client();
}

void client_book::add_project()
{
	int x;
	cout << "[";
	for (int i = 0; i <= m_counter; i++)
	{
		cout << i + 1 << "-";
		m_client[i].display_client_name();
		cout << " ";
	}
	cout << "]...";
	cin >> x;
	m_client[x - 1].add_project();
}

void client_book::set_time_sheet()
{
	int x;
	cout << "[";
	for (int i = 0; i <= m_counter; i++)
	{
		cout << i + 1 << "-";
		m_client[i].display_client_name();
		cout << " ";
	}
	cout << "]...";
	cin >> x;
	m_client[x - 1].set_time_sheet();
}

void client_book::displat_time_sheet()
{
	int x;
	cout << "[";
	for (int i = 0; i <= m_counter; i++)
	{
		cout << i + 1 << "-";
		m_client[i].display_client_name();
		cout << " ";
	}
	cout << "]...";
	cin >> x;
	m_client[x - 1].display();
}

void client_book::display_all_client()
{
	for (int i = 0; i <= m_counter; i++)
		m_client[i].display_client();
}

void client_book::display_all_ptojects()
{
	int x;
	cout << "[";
	for (int i = 0; i < m_counter; i++) 
	{
		cout << i + 1 << "-";
		m_client[i].display_client_name();
		cout << " ";
	}
	cout << "]...";
	cin >> x;
	m_client[x - 1].display_all_ptoject();
		
}
