#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define ARR_SIZE 8

class PhoneBook
{
private:
	Contact contacts[ARR_SIZE];
	size_t	contact_cnt;
	size_t	contact_idx;

public:
	PhoneBook();
	void	add();
	void	search() const;
};



#endif