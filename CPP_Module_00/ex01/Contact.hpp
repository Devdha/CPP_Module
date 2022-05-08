#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define CWIDTH 10
# define OWIDTH 15
# define SEPARATOR '|' 

class Contact {
private:
	ssize_t		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	void printEach(std::string str, char seperator) const;

public:
	Contact();
	Contact(
		ssize_t		idx,
		std::string	first_name,
		std::string	last_name,
		std::string	nickname,
		std::string	phone_number,
		std::string	darkest_secret);

	void show() const;
	void showDetail() const;
};

#endif