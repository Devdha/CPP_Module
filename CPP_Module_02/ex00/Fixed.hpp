#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int _value;
	static const int _numOfBits = 8;
public:
	Fixed();
	Fixed(const Fixed& old);
	~Fixed();

	Fixed& operator=(const Fixed& src);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif