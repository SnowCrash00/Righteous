//
//  main.cpp
//  C++ Practice
//
//  Created by Christopher Tobias on 4/18/14.
//  Copyright (c) 2014 Christopher Tobias. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Mermaid.h"
#include <cstdlib>
using namespace std;

int indexOfSmallest(const int a[], int startIndex, int numberUsed);
void sort (int a[], int numberUsed);
void swapValues (int &v1, int &v2);

struct Grade {
    int quiz1, quiz2, midterm, final;
};

class CounterType {
private:
    int counter;
public:
    void setCount(int c);
    int getCount();
    void printCount();
    void increase();
    void decrease();
};

void CounterType::setCount(int c){
    if (c < 0) {
        cout << "Error: Can't set counter below zero.\n";
    }
    else
    counter = c;
}

int CounterType::getCount() {
    return this->counter;
}

void CounterType::printCount() {
    cout << getCount() << endl;
}

void CounterType::increase(){
    counter++;
}

void CounterType::decrease(){
    counter--;
}


double calculateGrade(Grade g);

class Money {
public:
    Money();
    Money(int dollars, int cents);
    int getCents() const;
    int getDollar() const;
    friend ostream& operator <<(ostream& outputStream, const Money& amount);
    friend istream& operator >>(istream& inputStream, Money& amount);
private:
    int dollars;
    int cents;
    int dollarsPart(double amount) const; // member variables can't be modified
};

const Money operator +(const Money& amount1, const Money& amount2);

Money::Money(int dollars, int cents){
    this->dollars = dollars;
    this->cents = cents;
}

Money::Money() {
    dollars = 0;
    cents = 0;
}


// in the main function, cout is plugged in for outputStream
ostream& operator <<(ostream& outputStream, const Money& amount){
    int absDollars = abs(amount.dollars);
    int absCents = abs(amount.cents);
    if (amount.dollars < 0 || amount.cents < 0) {
        outputStream << "$-";
    }
    else
        outputStream << '$';
    outputStream << absDollars;
    
    if (absCents >= 10)
        outputStream << '.' << absCents;
    else
        outputStream << '.' << '0' << absCents;
    
    return outputStream;
    
}

istream& operator >>(istream inputStream, Money& amount) {
    char dollarSign;
    inputStream >> dollarSign;
    if (dollarSign != '$'){
        cout << "No dollar sign in Money input.\n";
        exit(-1);
    }
    
    double amountAsDouble;
    inputStream >> amountAsDouble;
    amount.dollars = amount.dollarsPart(amountAsDouble);
    amount.cents = amount.centsPart(amountAsDouble);
    return inputStream;
    
}

int Money::getCents() const {
    return cents;
}

int Money::getDollar() const {
    return dollars;
}


int main(int argc, const char * argv[])
{
    Money yourAmount, myAmount(10,9);
    cout << "Enter an amount of money: ";
    cin >> yourAmount;
    cout << "Your amount is " << yourAmount << endl;
    cout << "My amount is " << myAmount << endl;
    
    
   
    return 0;
}
/*
const Money operator +(const Money& amount1, const Money& amount2){
    int allCents1 = amount1.getCents() + amount1.getDollar()*100;
    int allCents2 = amount1.getCents() + amount2.getDollar()*100;
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents / 100;
    int finalCents = absAllCents % 100;
    
    if (sumAllCents < 0){
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }
    return Money(finalDollars, finalCents);
}

double calculateGrade(Grade g){
    
    double result = (g.quiz1 + g.quiz2)*.20 + g.midterm* .25 + g.final* .50;
    return result;
}
*/


