//
//  main.cpp
//  HW1SecToDateTime
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // change sec into DateTime format
    int second, minute, hour, day;
    cout << "Please enter seconds you want to transform:" << endl;
    cin >> second;
    day = second / (60*60*24);
    second = second - day*60*60*24;
    
    hour = second / (60*60);
    second = second - hour*60*60;
    
    minute = second / 60;
    second = second - minute*60;
    
    cout << day << "day(s), " << hour << ":" << minute << ":" << second << endl;
    return 0;
}
