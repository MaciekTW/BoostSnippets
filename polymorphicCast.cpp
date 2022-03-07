//
// Created by Maciek on 07.03.2022.
//

//
// Created by Maciek on 07.03.2022.
//

#include <iostream>
#include <boost/cast.hpp>

class fruit{
public:
    virtual ~fruit() {}
};

class apple : public fruit {
public:
    void color(){
        std::cout<<"red"<<std::endl;
    };
    virtual ~apple() {};
};
int main(int argc, char *argv[])
{
    fruit* appleFruit = new apple;
    boost::polymorphic_cast<apple*>(appleFruit)->color();
    fruit* appleFruitBad = new fruit; //or nullptr
    boost::polymorphic_cast<apple*>(appleFruitBad)->color();


} // end of `main`