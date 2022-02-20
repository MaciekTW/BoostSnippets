#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>

int main(int argc, char *argv[])
{
    //any works in run-time :<
    std::vector<boost::any> anyTypes {};
    anyTypes.push_back(12);
    anyTypes.push_back(1.2);
    anyTypes.push_back(std::string("Hello"));

    //getting value with exception in case of wrong type
    std::cout<<"Element: "<<boost::any_cast<std::string>(anyTypes.at(3))<<std::endl;
    //getting value without exception (returns NULL)
    std::cout<<"Element: "<<boost::any_cast<std::string>(&anyTypes.at(3))<<std::endl;

} // end of `main`