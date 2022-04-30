#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define CWIDTH 10
# define SEPARATOR '|' 

class Contact {
private:
	size_t		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(
		size_t		idx,
		std::string	first_name,
		std::string	last_name,
		std::string	nickname,
		std::string	phone_number,
		std::string	darkest_secret);

	void show() const;
};

#endif