//
//  main.cpp
//  P2StrucBookInfo
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

typedef struct {
    
    string name;
    int isbn;
    int price;
    string place;
    
} Book;

int main() {
    // insert code here...
    
    Book book;
    
    cout << "Please enter the name of the book:" << endl;
    cin >> book.name;
    
    cout << "Please enter the ISBN of the book:" << endl;
    cin >> book.isbn;
    
    cout << "Please enter the price of the book:" << endl;
    cin >> book.price;
    
    cout << "Please enter the location of the book:" << endl;
    cin >> book.place;
    
    cout << book.name << endl;
    cout << book.isbn << endl;
    cout << book.price << endl;
    cout << book.place << endl;
    
    return 0;
}
