#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int 				_value;
	static const int	_numOfBits = 8;
public:
	Fixed();
	Fixed(const Fixed& old);
	~Fixed();
	Fixed&	operator=(const Fixed& src);

	Fixed(const int value);
	Fixed(const float value);

	Fixed&	operator>(const Fixed& fixed);
	Fixed&	operator<(const Fixed& fixed);
	Fixed&	operator>=(const Fixed& fixed);
	Fixed&	operator<=(const Fixed& fixed);
	Fixed&	operator==(const Fixed& fixed);
	Fixed&	operator!=(const Fixed& fixed);

	Fixed&	operator+(const Fixed& fixed);
	Fixed&	operator-(const Fixed& fixed);
	Fixed&	operator*(const Fixed& fixed);
	Fixed&	operator/(const Fixed& fixed);

	float	toFloat() const;
	int		toInt() const;

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif