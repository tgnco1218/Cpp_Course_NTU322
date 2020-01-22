#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifile;
    ifile.open("HW7_2.txt");

    ofstream ofile;
    ofile.open("HW7_2_Output.txt");

    string str,answer;
    if(ifile){
        while(getline(ifile,str)){
            cout << str << endl;
            getline(cin,answer);
            ofile << str << '\n';
            ofile << answer << '\n';
        }
    }
    else
        cout << "File not exist! " << endl;


    ofile.close();
    ifile.close();
    return 0;
}
