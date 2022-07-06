// https://exercism.org/tracks/cpp/exercises/luhn

#include<iostream>
#include"../inc/luhn.hpp"

int main()
{
	std::cout << _Luhn::Validate( std::move("4539 3195 0343 6467") ); // true
	std::cout << _Luhn::Validate( std::move("8273 1232 7352 0569") ); // false
	return 0;
}

