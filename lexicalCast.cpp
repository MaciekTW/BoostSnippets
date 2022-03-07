//
// Created by Maciek on 07.03.2022.
//

#include <iostream>
#include <boost/lexical_cast.hpp>
#include <array>

int main(int argc, char *argv[])
{
    std::string number {"451000"};
    std::cout<<number<<std::endl;
    int numberInt = boost::lexical_cast<int>(number);
    std::cout<<numberInt<<std::endl;
    number=boost::lexical_cast<std::string>(345);
    std::cout<<number<<std::endl;
    //boundaries check with exception
    try{
        short numberShort = boost::lexical_cast<short>(number);
    }catch(const boost::bad_lexical_cast& e)
    {
        std::cout<<"Exception caught "<<e.what()<<std::endl;
    }
    //boundaries check without exception
    short numberShort;
    bool isConversionOk = boost::conversion::try_lexical_convert(number,numberShort);
    std::cout<<isConversionOk<<std::endl;

    //To perform fast string to number conversions in c++17 use from_chars and to_chars (it does not use std::locale)
    //To convert user defined types check Boost C++ Application Development Cookbook p.235


} // end of `main`