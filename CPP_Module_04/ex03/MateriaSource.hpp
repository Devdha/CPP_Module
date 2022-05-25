#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource {
 public:
  MateriaSource();
  MateriaSource(const MateriaSource& src);
  MateriaSource& operator=(const MateriaSource& src);
  ~MateriaSource();

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);
};

#endif  // MateriaSource_HPP