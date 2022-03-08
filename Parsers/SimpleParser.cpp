//
// Created by Maciek on 08.03.2022.
//

#include "SimpleParser.h"
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>

SimpleParser::date SimpleParser::parseTime(const std::string &s) {
    using boost::spirit::qi::_1;
    using boost::spirit::qi::uint_parser;
    using boost::spirit::qi::char_;
    using boost::phoenix::ref;

    date result;
    const int decimalBase{10};
    uint_parser<unsigned short, decimalBase, 2, 2> u2_;
    uint_parser<unsigned short, decimalBase, 4, 4> u4_;

    const char *first = s.data();
    const char *const end = first + s.size();
    const bool success = boost::spirit::qi::parse(first, end, u4_[ref(result.year) = _1] >> char_('-')
                                                                                         >> u2_[ref(result.month) = _1]
                                                                                         >> char_('-')
                                                                                         >> u2_[ref(result.day) = _1]);
    if( !success or first != end)
    {
        date empty {};
        return empty;
    }
    return result;
}
