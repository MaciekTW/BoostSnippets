#include <iostream>

#include "SimpleParser.h"

int main(int argc, char *argv[])
{
    SimpleParser parser1 {};

    auto date = parser1.parseTime("temp");
    std::cout<<date.year<<" "<<date.month<<" "<<date.day<<std::endl;

    date = parser1.parseTime("2020-10-23");
    std::cout<<date.year<<" "<<date.month<<" "<<date.day<<std::endl;
} // end of `main`