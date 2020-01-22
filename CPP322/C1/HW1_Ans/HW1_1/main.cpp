#include <iostream>

using namespace std;

int main()
{
    int year, month, day;
    cout << "What year is your birthday?" << endl;
    cin >> year;
    cout << "What month is your birthday?" << endl;
    cin >> month;
    cout << "What day is your birthday?" << endl;
    cin >> day;
    cout << "Thank you, I know that your birthday is ";
    cout << year << "/" << month << "/" << day << "!";
    return 0;
}
