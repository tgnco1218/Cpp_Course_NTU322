#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

typedef struct {
    string cdatetime;
    string address;
    string district;
    string beat;
    string grid;
    string crimedescr;
    string ucr_ncic_code;
    string latitude;
    string longitude;
} Data;
38.58032651
int main () {
    string str;
    ifstream ifile;
    Data data[7585];
    ifile.open("TestData.csv");
    if (ifile)
    {   int c = 0;
        while (getline (ifile,str)){
            stringstream ss(str);
            getline (ss,data[c].cdatetime,',');
            getline (ss,data[c].address,',');
            getline (ss,data[c].district,',');
            getline (ss,data[c].beat,',');
            getline (ss,data[c].grid,',');
            getline (ss,data[c].crimedescr,',');
            getline (ss,data[c].ucr_ncic_code,',');
            getline (ss,data[c].latitude,',');
            getline (ss,data[c].longitude,',');
            c++;
        }
        cout << "Finish reading data from TestData.csv" << endl;

        string str;
        cout << "Please enter the latitude you would like to find" <<endl;
        cin >> str;
        for (int i=0; i<7585 ;i++){
            if (str.compare(data[i].latitude)==0)
            {
                cout << "-------" << i+1 <<"-------" <<endl;
                cout << "cdatetime : " <<data[i].cdatetime << endl;
                cout << "address : " <<data[i].address << endl;
                cout << "district : " <<data[i].district << endl;
                cout << "beat : " <<data[i].beat << endl;
                cout << "grid : " <<data[i].grid << endl;
                cout << "crimedescr : " <<data[i].crimedescr << endl;
                cout << "ucr_ncic_code : " <<data[i].ucr_ncic_code << endl;
                cout << "latitude : " <<data[i].latitude << endl;
                cout << "longitude : " <<data[i].longitude << endl;
            }
        }
    }
    else
    {
        cout << "Error" <<endl;
    }
ifile.close();
    return 0;
}
