//
//  Age.h
//  P7Extern
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#ifndef Age_h
#define Age_h

#include <iostream>
using namespace std;

extern int age_1;
extern int age_2;

enum status{
        isYoung,
        isMiddle,
        isOld,
};

void distinguishAge();

#endif /* Age_h */
