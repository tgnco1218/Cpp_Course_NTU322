//
//  main.cpp
//  HW1AskBirthday
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // ask user for birthday then echo
    int year, month, date;
    cout << "What year is your birthday?" << endl;
    cin >> year;
    cout << "What month is your birthday?" << endl;
    cin >> month;
    cout << "What date is your birthday?" << endl;
    cin >> date;
    cout << "Thank you, I know your birthday is " << year << "/" << month << "/" << date << "!" << endl;
    return 0;
}
