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

	bool	operator>(const Fixed& fixed);
	bool	operator<(const Fixed& fixed);
	bool	operator>=(const Fixed& fixed);
	bool	operator<=(const Fixed& fixed);
	bool	operator==(const Fixed& fixed);
	bool	operator!=(const Fixed& fixed);

	Fixed	operator+(const Fixed& fixed);
	Fixed	operator-(const Fixed& fixed);
	Fixed	operator*(const Fixed& fixed);
	Fixed	operator/(const Fixed& fixed);

	Fixed&	operator++();
	Fixed	operator++(int i);
	Fixed&	operator--();
	Fixed	operator--(int i);

	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);

	float	toFloat() const;
	int		toInt() const;

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif