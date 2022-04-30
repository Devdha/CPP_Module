#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define ARR_SIZE 8

class PhoneBook {
private:
	Contact contacts[ARR_SIZE];
	ssize_t	contact_idx;

public:
	PhoneBook();
	void	add(std::string *info);
	void	search() const;
};



#endif