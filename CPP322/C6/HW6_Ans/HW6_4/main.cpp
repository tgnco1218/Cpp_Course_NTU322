#include <iostream>

using namespace std;

double square(double x, double upperBound, double lowerBound, double e){
    double mid = (upperBound+lowerBound)/2.0;
    double errNow = mid*mid-x;
    if(errNow*errNow<e*e)
        return mid;
    else if(mid*mid>x)
        return square(x,mid,lowerBound,e);
    else
        return square(x,upperBound,mid,e);
}

int main()
{
    double x,e;
    cout << "Please enter a number(>1) and error : " <<endl;
    cin >> x >> e;
    cout << "The square root is " << square(x,x,0,e);
    return 0;
}
