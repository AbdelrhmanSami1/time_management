#include "Time.h"
#include<iostream>
using namespace std;
Time::Time() :m_hours(0), m_minutes(0)
{
}
Time::Time(int hours, int minutes, int day, int month)
	: m_hours(hours), m_minutes(minutes), m_day(day), m_month(month)
{
}

Time::Time(const Time&t):m_hours(t.m_hours), m_minutes(t.m_minutes)
{
}

void Time::set_time()
{
	cout << "HH:MM...";
	char c;
	cin >> m_hours >> c >> m_minutes;
	
}

void Time::set_date()
{
	cout << "DD/MM...";
	char c;
	cin >> m_day >> c >> m_month;
}

void Time::set_time_date()
{
	char c;
	cout << "HH:MM...";
	cin >> m_hours >> c >> m_minutes;
	cout << "DD/MM...";
	cin >> m_day >> c >> m_month;
}


Time Time::dur(Time& t1,Time& t2)
{
	Time t;
	m_hours = t1.m_hours - t2.m_hours;
	m_minutes = t1.m_minutes - t2.m_minutes;
	if (m_minutes < 0) {
		m_hours--;
		m_minutes += 60;
	}
	return t;
}

void Time::sum_of_dur(Time& t)
{
	m_minutes += t.m_minutes;
	m_hours += t.m_hours;
	if (m_minutes >= 60) {
		m_hours++;
		m_minutes -=60;
	}
}

bool Time::is_pass(Time& t)
{
	if (m_month < t.m_month || (m_month == t.m_month && m_day < t.m_day)) {
		return true;
	}
	else {
		return false;
	}
}

bool Time::arlierDate(Time& d1, Time& d2)
{
	if (d1.m_month < d2.m_month || (d1.m_month == d2.m_month && d1.m_day < d2.m_day)) {
		return true;
	}
	else {
		return false;
	}
}

void Time::display()
{
	cout << m_hours << ":" << m_minutes;
}

void Time::display_time_date()
{
	cout << m_hours << ":" << m_minutes << " Date: " << m_day << "/" << m_month;

}

void Time::display_date()
{
	cout << m_day << "/" << m_month << endl;
}
