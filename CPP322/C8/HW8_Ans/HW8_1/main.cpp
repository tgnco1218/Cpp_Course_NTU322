#include <iostream>

using namespace std;

enum Day{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    int N;
    cout << "Please enter the week day." << endl;
    cin >> N;
    switch(N){
        case Monday:
            cout << "Monday" << endl;
            break;
        case Tuesday:
            cout << "Tuesday" << endl;
            break;
        case Wednesday:
            cout << "Wednesday" << endl;
            break;
        case Thursday:
            cout << "Thursday" << endl;
            break;
        case Friday:
            cout << "Friday" << endl;
            break;
        case Saturday:
            cout << "Saturday" << endl;
            break;
        case Sunday:
            cout << "Sunday" << endl;
            break;
    }

    return 0;
}
