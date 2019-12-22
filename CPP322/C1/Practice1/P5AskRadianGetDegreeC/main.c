//
//  main.c
//  C1T5
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // let user input radian and get degree using c
    float radian, degree;
    printf("Please enter your radian: \n");
    scanf("%f", &radian);
    degree = radian/3.1415926*180.0;
    printf("Radian: %.3f, Degree: %.3f\n", radian, degree);
    return 0;
}

