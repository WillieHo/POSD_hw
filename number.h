//
//  Number.h
//  POSDhomework
//
//  Created by Ｗillie on 10/1/17.
//  Copyright © 2017 Ｗillie. All rights reserved.
//

#ifndef Number_h
#define Number_h
#include <string>
#include "simpleObject.h"
#include "variable.h"

using std::string;

class Number : public SimpleObject {
public:
    Number(int symbol, string typeName = "Number") : SimpleObject(typeName), _symbol(symbol) {}
    string symbol() const { return std::to_string(_symbol); }
    string value() { return _value; }
    void setValue(string value) { _value = value; }
//    bool match(SimpleObject *simpleObject) {
//        Number *number = dynamic_cast<Number *>(simpleObject);
//        if (number) {
//            return symbol() == number->symbol();
//        }
//        Variable *variable = dynamic_cast<Variable *>(simpleObject);
//        if (variable) {
//            bool matchSuccess = false;
//            if (variable->_isAssignable(this)) {
//                variable->setValue(symbol());
//                _value = variable->symbol();
//                matchSuccess = true;
//            }
//            return matchSuccess;
//        }
//        return false;
//    }
private:
    int const _symbol;
    string _value;
};

#endif 