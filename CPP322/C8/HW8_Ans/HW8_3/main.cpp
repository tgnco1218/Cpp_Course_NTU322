#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
}Point3D;

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

int main()
{
    Point3D p1 = {3,4,5};
    Point3D p2 = {1,2,3};
    cout << "p1= " << p1;
    cout << "p2= " << p2;
    cout << "The distance between p1 and p2 is:" << p1-p2 <<endl;
    return 0;
}
