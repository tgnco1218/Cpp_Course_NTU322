#include <iostream>

using namespace std;

int main()
{
    int v = 99;
    int *Point_1 = &v;
    int **Point_2 = &Point_1;
    int *&Reference_1 = Point_1;

    cout << "v:" << v << endl;
    cout << "Point_1:" << Point_1 << endl;
    cout << "Point_2:" << Point_2 << endl;
    return 0;
}
