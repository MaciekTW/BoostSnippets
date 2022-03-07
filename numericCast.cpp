//
// Created by Maciek on 07.03.2022.
//

#include <iostream>
#include <boost/numeric/conversion/cast.hpp>
#include <array>

int main(int argc, char *argv[])
{
    int number {451000};
    std::cout<<number<<std::endl;
    long numberLong = boost::numeric_cast<long>(number);
    std::cout<<numberLong<<std::endl;

    //boundaries check with exception
    try{
        short numberShort = boost::numeric_cast<short>(number);
    }catch(const boost::bad_numeric_cast& e)
    {
        std::cout<<"Exception caught "<<e.what()<<std::endl;
    }
    
    //To perform fast string to number conversions in c++17 use from_chars and to_chars (it does not use std::locale)


} // end of `main`