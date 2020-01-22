#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifile;
    ifile.open("HW7_4_Encoded.txt");
    ofstream ofile;
    ofile.open("HW7_4_Decoded.txt");

    int c;
    if(ifile){
        while(ifile>>c){
            ofile << (char) c;
        }
    }
    else
        cout << "File not exist! " << endl;

    ofile.close();
    ifile.close();
    return 0;
}
