#include <iostream>
#include <vector>
#include <string>
#include <boost/variant.hpp>

struct variant_get_value : public boost::static_visitor<> {
    void operator()(int value) const {
        std::cout << value;
    }

    void operator()(double value) const {
        std::cout << value;
    }

    void operator()(std::string value) const {
        std::cout << value;
    }
};

int main(int argc, char *argv[]) {
    std::vector<boost::variant<int, double, std::string>> manyTypes{};
    manyTypes.push_back(12);
    manyTypes.push_back(1.2);
    manyTypes.push_back(std::string("Hello"));
    manyTypes.push_back(54);

    //getting value with exception
    std::cout << "Element: " << boost::get<std::string>(manyTypes.at(2)) << std::endl;
    //getting value with NULL as error
    std::cout << "Element: " << *boost::get<std::string>(&manyTypes.at(2)) << std::endl;


    //getting info about type
    //Printing different types values with visitor
    for (int i = 0; i < manyTypes.size(); ++i) {
        boost::apply_visitor(variant_get_value(), manyTypes.at(i));
        std::cout << " \t type: " << manyTypes.at(i).which() << std::endl;
    }

} // end of `main`