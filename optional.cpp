#include <iostream>
#include <vector>
#include <string>
#include <boost/optional.hpp>

boost::optional<double> check(double x)
{
    if(x < 10)
    {
        return x;
    }
    else{
        return boost::none;
    }
}

int main(int argc, char *argv[])
{

    if(check(10.0))
        std::cout<<"PRAWDA\n";
    else
        std::cout<<"NONE\n";
} // end of `main`