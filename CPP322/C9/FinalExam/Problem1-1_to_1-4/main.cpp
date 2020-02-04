//
//  main.cpp
//  Problem1-1_to_1-4
//
//  Created by KYT on 2020/2/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    
    string str;
    ifstream ifile;
    
    int data[100][11];
    
    string filename="Problem1_TestData.csv";
    
    ifile.open(filename);
    if (ifile)
    {
        
        int c = 0;
        while (getline (ifile, str)){
            stringstream ss(str);
            string temp;
            
            //Print the order of line
            cout << "line #" << c+1 ;
            for(int i=0; i<11; i++){
                getline(ss, temp, ',');
                //atoi is used to transform string to int
                data[c][i] = atoi(temp.c_str());
                
                //Print the elements of each row
                cout << " " << data[c][i] << " ";
            }
            cout << endl;
            c++;
        }
        cout << "Finish reading data" << endl;
    }
    else
    {
        cout << "Error" <<endl;
    }
    
    
    double sum, average, sd;
    double averageArr[100], sdArr[100];
    //Calculate the average of each row
    for (int i = 0; i<100; i++){
        
        //Print the order of line
        cout << "line #" << i+1 ;
        //Calibrate sum to 0
        sum = 0.0;
        
        for (int j=0; j<11; j++)
        {
            //To Do : Let the sum be the summation of each row
            sum += data[i][j];
        }
        
        //To Do : Let the average equal to the summation divided by 11.0
        average = sum/11.0;
        cout << " ; average = " << average <<endl;
        //Deposit to array
        averageArr[i] = average;
    }
    
    
    //Calculate the Standard derivation of each row
    for (int i=0; i < 100; i++){
        
        //Calibrate sum to 0
        sum = 0.0;
        //Print the order of line
        cout << "line #" << i+1;
        
        for (int j=0; j<11; j++)
        {
            //To Do : Let the sum be the summation of (element - average)^2 each row
            sum += pow((data[i][j]-averageArr[i]), 2);
        }
        
        //To Do : Let the sd equal to the square of (summation divided by 11.0)
        sd = pow((sum/11.0), 2);
        cout << " ; SD = " << sd <<endl;
        
        //Deposit to array
        sdArr[i] = sd;
    }
    
    //Write them into a csv file
    ofstream fout("Problem_output.csv");
    for (int i = 0; i<100; i++){
        for (int j=0; j<11; j++)
        {
            //To Do : write each element to fout by "fout << xxxxx"
            //Hint : Remember to separate it by comma ","
            fout << data[i][j] << ",";
        }
        //To Do : write average and SD to fout by "fout << xxxxx"
        //Hint : Remember to give it a end of line "endl"
        fout << averageArr[i] << "," << sdArr[i] << endl;
    }
    
    ifile.close();
    fout.close();
    
    return 0;
}

