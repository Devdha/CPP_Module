#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d(50);
	Fixed e(10);
	Fixed f(42.42f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a-- << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << c / a << std::endl;
	std::cout << c * a << std::endl;

	std::cout << d + e << std::endl;
	std::cout << d - e << std::endl;

	std::cout << f + e << std::endl;
	std::cout << f - e << std::endl;

	std::cout << Fixed::min(c, a) << std::endl;
	
	return 0;
}
