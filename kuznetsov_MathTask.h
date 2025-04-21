#ifndef KUZNETSOV_MATHTASK_H
#define KUZNETSOV_MATHTASK_H
#include <iostream>
#include <string>
#include <map>
#include <functional>
using namespace std;
bool UserInputInt(string input){
    if(input.empty()) return false;
    bool only = true;
    for(char c : input){
        if(!isdigit(c)){
            only = false;
            break;
        }
    }
    try
    {
        int number = stoi(input);
        if (number < 0) return false;
        if(!only) return false;
    }
    catch(const std::exception& e)
    { return false;}

    return true;
}
void EnterNumberInt(int& varLink, string label){
        string raw_input;
        cout << label << " = ";
        getline(cin,raw_input);
        while (!UserInputInt(raw_input)){
            cout << label << " = ";
            getline(cin,raw_input);
        }
        varLink = stoi(raw_input);
    
}

bool task_2(int number) {
    if(number < 10) return true;
    int lastDigit = number % 10;
    int firstDigit = number;
    
    while(firstDigit >= 10) {
        firstDigit /= 10;
    }
    return firstDigit == lastDigit;
}

bool task_3(int number) {
    int lastDigit = number % 10;
    return lastDigit % 2 != 0;
}

#endif