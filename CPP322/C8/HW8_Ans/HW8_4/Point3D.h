#ifndef POIINT3D_H_INCLUDED
#define POIINT3D_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
}Point3D;
float operator-(Point3D,Point3D);
ostream& operator<< (ostream&,Point3D);

#endif // POIINT3D_H_INCLUDED
