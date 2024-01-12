#include "phone.h"

phone::phone() :m_phone_number("unnown"), m_type("nunown")
{
}

phone::phone(string phone_number, string type):m_phone_number(phone_number), m_type(type)
{
}

void phone::set_phone()
{
	cout << "Phone number: ";
	cin >> m_phone_number;
	cout << "(Home-Work-Mobile):";
	cin >> m_type;
}

void phone::display_phone()
{
	cout << "Phone number: " << m_phone_number;
	cout << "(" << m_type << ")" << endl;
}
