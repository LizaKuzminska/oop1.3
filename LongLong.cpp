#include "LongLong.h"
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;
void LongLong::setUpper(long upper) {
    this->upper = upper;
}
void LongLong::setLower(long lower) {
    this->lower = lower;
}
long LongLong::getUpper() const {
    return this->upper;
}
long LongLong::getLower() const {
    return this->lower;
}

void LongLong::Init(long upper, long lower) {
    setUpper(upper);
    setLower(lower);
}
void LongLong::Read() {
    long upperPart, lowerPart;
    cout << "Enter upper part: ";
    cin >> upperPart;
    cout << "Enter lower part: ";
    cin >> lowerPart;
    Init(upperPart, lowerPart);
}
void LongLong::Display() const {
    cout << "Upper part: " << upper << ", Lower part: " << lower << endl;
}

string LongLong::toString() const {
    stringstream sout;
    sout << upper << lower;
    return sout.str();
}
long LongLong::toLong() const {
    return stol(toString());
}




bool lessThan(LongLong l, LongLong r) {
    if (l.getUpper() < r.getUpper()) {
        return true;
    }
    else if (l.getUpper() == r.getUpper()) {
        return l.getLower() < r.getLower();
    }
    else {
        return false;
    }
}

bool notLessThan(LongLong l, LongLong r) {
    return !lessThan(l, r);
}

bool greaterThan(LongLong l, LongLong r) {
    return !lessThan(l, r) && (l.getUpper() != r.getUpper() || l.getLower() != r.getLower());
}