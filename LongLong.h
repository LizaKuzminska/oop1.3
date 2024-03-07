#pragma once
#include <string> 
using namespace std;
class LongLong {
private:
    long upper;
    long lower;
public:
    long getUpper() const;
    long getLower() const;
    void setUpper(long upper);
    void setLower(long lower);
    void Init(long upper, long lower);
    void Read();
    void Display() const;
    string toString() const;
    long toLong() const;
    friend bool lessThan(LongLong l, LongLong r);
    friend bool notLessThan(LongLong l, LongLong r);
    friend bool greaterThan(LongLong l, LongLong r);
};