#include "time_sheet.h"

time_sheet::time_sheet()
{
	c = -1;
	m_start = new(Time[10]);
	m_end = new(Time[10]);
	m_duration = new(Time[10]);
}
void time_sheet::set_start()
{
	c++;
	m_start[c].set_time();
}
void time_sheet::set_end()
{
	m_end[c].set_time_date();
	m_duration[c].dur(m_end[c],m_start[c]);
	m_sum.sum_of_dur(m_duration[c]);
}
Time time_sheet::last_date()
{
	return m_end[c];
}
void time_sheet::display()
{	
	for (int i = 0; i <= c; i++)
	{
		cout << i + 1;
		cout << " :Start in: "; m_start[i].display();
		cout <<  "   " << "End in ";   m_end[i].display_time_date();
		cout << "    ";                m_duration[i].display();
		cout << endl;
	}
	cout << "-------------This project take: "; m_sum.display();
	cout << "--------------\n";
}

