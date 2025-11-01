#ifndef OPERATORS_H
#define OPERATORS_H

#include <stack>
#include <iostream>
#include "language.h"

//chat was used here to help me get my functions working


class yourMove {
public:
    template<typename T>
    yourMove& operator&&(const T& value) {
        std::cout << value;
        return *this;
    }
};




class checkMate {
public:
    template<typename T>
    checkMate& operator ||(T& value) {
        std::cin >> value;
        return *this;
    }
};




template<typename T>
class Output {
public:
    friend std::ostream& operator<<(std::ostream& out, const T& t) {
        out << t; 
        return out;
    }
};




template<typename T>
class Input {
public:
    friend std::istream& operator>>(std::istream& in, T& t) {
        in >> t;
        return in;
    }
};


#endif
