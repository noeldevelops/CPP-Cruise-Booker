//A. Noel Cothren
//acothren1@cnm.edu
//Program 5 - Alaskan Cruise

//File: Date.cpp

#include <string>
#include <ctime>
#include <sstream>
#include "Date.h"

using namespace std;

const int Date::dayCount[12] = { 31,28,31,30,31,30,
31,31,30,31,30,31 };
const string Date::monName[12] = { "January","February ","March",
"April", "May", "June", "July", "August",
"September", "October", "November", "December" };

Date::Date()
{

	//Set the Date variables to the computer's date.

	time_t rawtime;
	tm OStime;

	time(&rawtime);

	//Old Way p.389
	//OStime = localtime(&rawtime);

	//New way, not deprecated
	localtime_s(&OStime, &rawtime);

	month = OStime.tm_mon + 1;
	day = OStime.tm_mday;
	year = OStime.tm_year + 1900;

	description = "Today's Date";
	DetermineLeapYear();
	CalcDayOfYear();
}


Date::Date(int m, int d, int y, string desc):
month(m), day(d), year(y), description(desc)
{
	description = desc;
	DetermineLeapYear();
	CalcDayOfYear();
}


void Date::SetDate(int m, int d, int y, string desc)
{
	month = m;
	day = d;
	year = y;
	description = desc;
	DetermineLeapYear();
	CalcDayOfYear();
}


string Date::GetFormattedDate()
{
	stringstream strDate;
	strDate << description;

	strDate << ": " << monName[month-1] << " " << day 
			<< ", " << year;

	return strDate.str();
}

bool Date::ValidateThisDate()
{
	//This function will check that the day of the month is not less than 1 and does not exceed the number of days in that month.
	//check years too
	//TODO refactor and create static arrays for monthNames and dayCount & simplify this code
	if ((month < 1) || (month > 12))
	{
		return false;
	}
	else if ((day < 1) || (day > 31))
	{
		return false;
	}
	else if ((month == 2) && (day > 29))
	{
		return false;
	}
	else if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && day > 30)
	{
		return false;
	} else 
	{
		return true;
	}
}

void Date::CalcDayOfYear()
{
	//set up array of days in each month
	//for non-leap year year
	dayOfYear = 0;

	//add the days up to the previous month
	for(int i = 1; i < month; ++i)
	{
		dayOfYear += dayCount[i-1];

		//if adding Feb, check if leap year
		if(i == 2 && bLeap == true)
			dayOfYear += 1;

	}

	dayOfYear += day;
}

void Date::DetermineLeapYear()
{
	//A year is a leap year if it is divisible by four, 
	//unless it is a century date (i.e,  1900). 
	//If it is a century date, it is a leap year only 
	//if it is divisible by 400 (i.e., 2000).

	if(year%4 == 0 && year % 100 != 0)
		bLeap = true;
	else if(year % 400 == 0)
		bLeap = true;
	else
		bLeap = false;
}

