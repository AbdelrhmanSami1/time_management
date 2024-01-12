#pragma once

class Time
{
	int m_hours;
	int m_minutes;
	int m_day;
	int m_month;
public:
	Time();
	Time(int hours, int minutes, int day, int month);
	Time(const Time&);
	void set_time();
	void set_date();
	void set_time_date();
	Time dur(Time&,Time&);
	void sum_of_dur(Time&);
	bool is_pass(Time&);
	bool arlierDate(Time&, Time&);
	void display();
	void display_time_date();
	void display_date();
};

