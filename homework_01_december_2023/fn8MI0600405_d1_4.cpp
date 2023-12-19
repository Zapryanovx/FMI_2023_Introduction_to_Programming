/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Ilian Zapryanov
* @idnumber 8MI0600405
* @task 3
*
*/

/*#include <iostream>

const int DAYS_OF_LONG_MONTH = 31;
const int DAYS_OF_SHORT_MONTH = 30;

const int MONTH_FEBRUARY_INDEX = 2;
const int DAYS_OF_FEBRUARY = 28;
const int DAYS_OF_FEBRUARY_LEAP_YEAR = 29;

const int MONTHS_OF_A_YEAR = 12;
const int JULIAN_CALENDAR_YEAR = 1916;
const int JULIAN_CALENDAR_END_MONTH = 3;
const int JULIAN_CALENDAR_END_DAY = 31;

const int GREGORIAN_CALENDAR_YEAR = 1917;
const int GREGORIAN_CALENDAR_MONTH_START = 4;
const int GREGORIAN_CALENDAR_DAY_START = 14;

bool isInputValid(int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay, int n);
void checkFebruary(int& currentYear, int& currentMonth, int& currentDay);
void checkLongMonths(int& currentYear, int& currentMonth, int& currentDay, int endYear, int endMonth, int endDay, bool& isDateAfterEnd);
void checkShortMonths(int& currentYear, int& currentMonth, int& currentDay);
void outputStartIntervalDate(int currentYear, int currentMonth, int currentDay);
void outputEndIntervalDate(int currentYear, int currentMonth, int currentDay);

int main()
{

	int startYear = 0, startMonth = 0, startDay = 0;
	int endYear = 0, endMonth = 0, endDay = 0;
	int n = 0;

	std::cin >> startYear >> startMonth >> startDay;
	std::cin >> endYear >> endMonth >> endDay;
	std::cin >> n;

	if (isInputValid(startYear, startMonth, startDay, endYear, endMonth, endDay, n))
	{

			
		int currentYear = startYear;
		int currentMonth = startMonth;
		int currentDay = startDay;
		
		int counter = 1;
		bool isDateAfterEnd = false;

		while (true)
		{

			if(currentMonth == MONTH_FEBRUARY_INDEX)
			{

				checkFebruary(currentYear, currentMonth, currentDay);
			}

			if ((currentMonth <= 7 && currentMonth % 2 != 0) || (currentMonth >= 8 && currentMonth % 2 == 0))
			{

				checkLongMonths(currentYear, currentMonth, currentDay, endYear, endMonth, endDay, isDateAfterEnd);

				if (isDateAfterEnd) 
				{

					break;
				}
			}

			else
			{
				
				checkShortMonths(currentYear, currentMonth, currentDay);
			}


			if (counter == 1)
			{

				outputStartIntervalDate(currentYear, currentMonth, currentDay);
			}

			if (currentYear == endYear && currentMonth == endMonth && currentDay == endDay)
			{

				outputEndIntervalDate(currentYear, currentMonth, currentDay);
				break;
			}
			else if (counter == n)
			{

				outputEndIntervalDate(currentYear, currentMonth, currentDay);
				counter = 0;
			}

			currentDay++;
			counter++;
		}
		
	}

	return 0;
}

bool isInputValid(int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay, int n)
{

	if (startYear < 1600 || startYear > 2100 || endYear < 1600 || endYear > 2100)
	{

		return false;
	}

	if (startYear > endYear)
	{

		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	if (startYear == endYear) 
	{

		if (startMonth > endMonth) 
		{

			std::cout << "Incorrect input" << std::endl;
			return false;
		}

		if (startMonth == endMonth) 
		{

			if (startDay >= endDay)
			{

				std::cout << "Incorrect input" << std::endl;
				return false;
			}
		}
	}

	if (!(n >= 1 && n <= 365)) 
	{

		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	return true;
}

void checkFebruary(int &currentYear, int &currentMonth, int &currentDay) 
{

	if (currentYear <= JULIAN_CALENDAR_YEAR)
	{
		if (currentYear % 4 == 0)
		{
			if (currentDay == DAYS_OF_FEBRUARY_LEAP_YEAR + 1)
			{
				currentDay = 1;
				currentMonth++;
			}
		}

		else
		{

			if (currentDay == DAYS_OF_FEBRUARY + 1)
			{
				currentDay = 1;
				currentMonth++;
			}
		}
	}

	else if (currentYear >= GREGORIAN_CALENDAR_YEAR)
	{

		if ((currentYear % 400 == 0) || (currentYear % 4 == 0 && currentYear % 100 != 0))
		{
			if (currentDay == DAYS_OF_FEBRUARY_LEAP_YEAR + 1)
			{
				currentDay = 1;
				currentMonth++;
			}
		}

		else
		{

			if (currentDay == DAYS_OF_FEBRUARY + 1)
			{
				currentDay = 1;
				currentMonth++;
			}
		}
	}
}

void checkLongMonths(int& currentYear, int& currentMonth, int& currentDay, int endYear, int endMonth, int endDay, bool& isDateAfterEnd)
{

	if (currentDay == DAYS_OF_LONG_MONTH + 1)
	{

		if (currentMonth == MONTHS_OF_A_YEAR)
		{

			currentDay = 1;
			currentMonth = 1;
			currentYear++;
		}

		else if (currentYear == JULIAN_CALENDAR_YEAR && currentMonth == JULIAN_CALENDAR_END_MONTH && currentDay == 32)
		{

			currentDay = GREGORIAN_CALENDAR_DAY_START;
			currentMonth = GREGORIAN_CALENDAR_MONTH_START;

			isDateAfterEnd = false;
			if (endYear == JULIAN_CALENDAR_YEAR && endMonth == GREGORIAN_CALENDAR_MONTH_START && endDay <= currentDay) 
			{

				std::cout << endYear << "-" << endMonth << "-" << endDay << std::endl;
				isDateAfterEnd = true;
			}
		}

		else
		{

			currentDay = 1;
			currentMonth++;
		}
	}
}

void checkShortMonths(int& currentYear, int& currentMonth, int& currentDay) {

	if (currentDay == DAYS_OF_SHORT_MONTH + 1)
	{

		currentDay = 1;
		currentMonth++;
	}
}

void outputStartIntervalDate(int currentYear, int currentMonth, int currentDay) 
{

	std::cout << currentYear << "-" << currentMonth << "-" << currentDay << " - ";
}

void outputEndIntervalDate(int currentYear, int currentMonth, int currentDay)
{

	std::cout << currentYear << "-" << currentMonth << "-" << currentDay << std::endl;
}*/