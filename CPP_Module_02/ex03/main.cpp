#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(10, 30);
	Point	in(5, 5);
	Point	out(30, 50); 

	std::cout << "Point \"in\" created at x-" << in.getX() << " y-" << in.getY() << std::endl;
	std::cout << "Point \"out\" created at x-" << out.getX() << " y-" << out.getY() << std::endl;
	std::cout << "Triangle Points create at p1-" << a.getX() << "," << a.getY() << std::endl;
	std::cout << "Triangle Points create at p2-" << b.getX() << "," << b.getY() << std::endl;
	std::cout << "Triangle Points create at p3-" << c.getX() << "," << c.getY() << std::endl;
	if (bsp(a, b, c, in))
		std::cout << "\"in\" is in the triangle" << std::endl;
	else
		std::cout << "\"in\" is out of the triangle" << std::endl;
	if (bsp(a, b, c, out))
		std::cout << "\"out\" is in the triangle" << std::endl;
	else
		std::cout << "\"out\" is out of the triangle" << std::endl;
	return 0;
}
