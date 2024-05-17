#include <iostream>
#include <ctime>

using namespace std;

bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else return false;
}
int daysAmountInCurrentMonth(int year, int month)
{
    switch(month)
    {
    case 1: return 31;
    case 2: isLeapYear(year) ? 29 : 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    }
}
int main()
{
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);

    int year = localTime -> tm_year + 1900;
    int month = localTime -> tm_mon + 1;

    int days = daysAmountInCurrentMonth(year, month);
    cout << days;
    return 0;
}

