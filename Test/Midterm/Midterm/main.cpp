/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: brandon
 *
 * Created on April 24, 2017, 12:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <ctime>
#include <vector>

using namespace std;

#include "Customer.h"
#include "Employee.h"

void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();


int Menu();
int getN();
string getS();

int main(int argc, char** argv) {

    int inp(0);
    
    do {
        inp = Menu();
        switch (inp) {
            case 1:
                p1();
                break;
            case 2:
                p2();
                break;
            case 3:
                p3();
                break;
            case 4:
                p4();
                break;
            case 5:
                p5();
                break;
            case 6:
                p6();
                break;
            case 7:
                p7();
                break;
            case 8:
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Invalid selection.";
        }
        
    } while (inp < 8);
    
    
    return 0;
}

void p1() {
    Customer c1(0);
}
void p2(){
    cout << "Paycheck Calculator" << endl;
    
    bool v(true);
    vector<Employee> emps;
    do {
        cout << "New Employee:" << endl;
        Employee e;
        v = e.setInfo();
        if (v == true) emps.push_back(e);
    } while (v == true);
    cout << "Invalid input." << endl <<
            "Here are all employee paychecks." << endl;
    for (int i = 0; i < emps.size(); i++) {
        emps[i].paycheck();
        cin.ignore(256, '\n');
        cin.get();
    }
}
void p3(){}
void p4(){}
void p5(){}
void p6(){}
void p7(){}

int Menu() {
    cout << "Choose a problem:" << endl <<
            "1: Balance Calculator" << endl <<
            "2: Paycheck Calculator" << endl <<
            "3: Problem 3" << endl <<
            "4: Problem 4" << endl <<
            "5: Problem 5" << endl <<
            "6: Problem 6" << endl <<
            "7: Problem 7" << endl <<
            "8: Exit" << endl;
    return getN();
}
int getN() {
    int n;
    cout << ">> ";
    cin >> n;
    return n;
}
string getS() {
    string s;
    cout << ">> ";
    cin >> s;
    return s;
}