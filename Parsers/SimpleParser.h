//
// Created by Maciek on 08.03.2022.
//

#ifndef BOOSTTEST_SIMPLEPARSER_H
#define BOOSTTEST_SIMPLEPARSER_H

#include <iostream>

class SimpleParser
{
    struct date{
        unsigned short year;
        unsigned short month;
        unsigned short day;
    };
public:
    date parseTime(const std::string& s);
};


#endif //BOOSTTEST_SIMPLEPARSER_H
