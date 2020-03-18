//A. Noel Cothren
//acothren1@cnm.edu
//Program 5 - Alaskan Cruise

//File: Date.h

#ifndef _DATE_H
#define _DATE_H

#include <string>
using namespace std;



class Date
{
	private:
			static const int dayCount[12]; 
			static const string monName[12];
			int month{1}, day{1}, year{1900};
			string description;
			int dayOfYear{1};
			bool bLeap{ false };
			void CalcDayOfYear();
			void DetermineLeapYear();

	public:
			Date();
			Date(int m, int d, int y, string desc);
			void SetDate(int m, int d, int y, string desc);
			void SetDesc(string d){ description = d; }

			string GetFormattedDate();

			int GetDayOfYear()const {return dayOfYear;}
			int GetYear()const { return year;}
			int GetMonth()const { return month;}
			int GetDay()const { return day;}
			bool isLeapYear()const{ return bLeap; }

			bool ValidateThisDate();
};



#endif