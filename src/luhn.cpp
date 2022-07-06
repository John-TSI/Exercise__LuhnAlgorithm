#include<algorithm>
#include<cctype> // isdigit
#include"../inc/luhn.hpp"


bool _Luhn::Validate(std::string&& input)
{
    if(input.length() < 2){ return false; }
    input.erase
    (
        std::remove_if(input.begin(), input.end(), [](const char& c){ return !isdigit(c); }) , input.end()
    );

    int sum{0}, index{0};
    for(char c : input)
    {
        int i{c - '0'}; // cast char digit to int
        (index%2 == 0) // doubling check applied to alternating digits starting with first
            ? (sum += (i*2 > 9) ? i*2 - 9 : i*2)
            : sum += i;
        ++index;
    }
    return (sum%10 == 0);
}