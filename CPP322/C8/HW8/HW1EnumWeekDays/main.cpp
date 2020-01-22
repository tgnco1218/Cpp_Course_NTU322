//
//  main.cpp
//  HW1EnumWeekDays
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>

using namespace std;

enum class Weekdays {
    
    isMonday = 1,
    isTuesday,
    isWednesday,
    isThursday,
    isFriday,
    isSaterday,
    isSunday
    
};

int main() {
    // insert code here...
    int w;
    cout << "Please enter the weekday: " << endl;
    cin >> w;
    Weekdays now;
    
    if (w == 1){
        now = Weekdays::isMonday;
    }
    
    else if (w == 2){
        now = Weekdays::isTuesday;
    }
    
    else if (w == 3){
        now = Weekdays::isWednesday;
    }
    
    else if (w == 4){
        now = Weekdays::isThursday;
    }
    
    else if (w == 5){
        now = Weekdays::isFriday;
    }
    
    else if (w == 6){
        now = Weekdays::isSaterday;
    }
    
    else {
        now = Weekdays::isSunday;
    }
    
    switch (now) {
        case Weekdays::isMonday:
            cout << "It's Monday!" << endl;
            break;
        
        case Weekdays::isTuesday:
            cout << "It's Tuesday!" << endl;
            break;
        
        case Weekdays::isWednesday:
            cout << "It's Wednesday!" << endl;
            break;
            
        case Weekdays::isThursday:
            cout << "It's Thursday!" << endl;
            break;
            
        case Weekdays::isFriday:
            cout << "It's Friday!" << endl;
            break;
            
        case Weekdays::isSaterday:
            cout << "It's Saterday!" << endl;
            break;
            
        case Weekdays::isSunday:
            cout << "It's Sunday!" << endl;
            break;
            
        default:
            break;
    }
    
    return 0;
}
