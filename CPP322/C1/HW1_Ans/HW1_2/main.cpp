#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight, height, BMI;
    cout << "Please enter your height(cm):" << endl;
    cin >> height;
    cout << "Please enter your weight(kg):" << endl;
    cin >> weight;
    height /= 100.0;
    BMI = weight / height / height;

    cout << "Your BMI is:" << fixed << setprecision(2) << BMI << endl;

    return 0;
}
