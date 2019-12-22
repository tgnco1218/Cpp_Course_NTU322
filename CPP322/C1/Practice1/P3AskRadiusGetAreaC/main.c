//
//  main.c
//  C1T6
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    // compute area with the user input radius with c
    float radius, area;
    printf("Please enter radius: \n");
    scanf("%f", &radius);
    area = 3.1415926 * radius * radius;
    printf("Radius: %.3f, Area: %.5f\n", radius, area);
    return 0;
}
