#include <iostream>
#include "Point3D.h"
using namespace std;

int main()
{
    Point3D p1 = {3,4,5};
    Point3D p2 = {1,2,3};
    cout << "p1= \n" << p1;
    cout << "p2= \n" << p2;
    cout << "The distance between p1 and p2 is:" << p1-p2 <<endl;
    return 0;
}
