#include <iostream>

using namespace std;

#include "IntVector.h"

int main()
{


    IntVector test1(3, 4);

    cout << ".at(0) test1. Expected 4: " << test1.at(0) << endl;
    cout << ".at(1) test1. Expected 4: " << test1.at(1) << endl;
    //cout << ".at(1) test1. Expected Error: " << test1.at(3) << endl; // Clear
    cout << ".front() test1. Expected 4: " << test1.front() << endl;
    cout << ".back() test1. Expected 4: " << test1.back() << endl;
    cout << ".empty() test1. Expected 0: " << test1.empty() << endl;
    cout << ".size() test1. Expected 3: " << test1.size() << endl;
    cout << ".capacity test1. Expected 3: " << test1.capacity() << endl << endl;



    IntVector test2(0, 0);

    cout << ".empty() test2. Expected 1: " << test2.empty() << endl;
    //cout << ".at(0) test2. Expected Error: " << test2.at(0) << endl; // Clear!



    return 0;

}