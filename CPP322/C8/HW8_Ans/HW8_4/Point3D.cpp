#include "Point3D.h"
#include <math.h>

float operator-(Point3D p1,Point3D p2){
    float distance = 0;
    distance += pow((p1.x-p2.x),2);
    distance += pow((p1.y-p2.y),2);
    distance += pow((p1.z-p2.z),2);
    distance = sqrt(distance);
    return distance;
}

ostream& operator<< (ostream& os,Point3D p){
    os << "(" << p.x << "," << p.y << "," << p.z << ")" << endl;
    return os;
}
