#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SLOT_MAX 4

class MateriaSource : public IMateriaSource {
 private:
  AMateria* _arr[SLOT_MAX];

 public:
  MateriaSource();
  MateriaSource(const MateriaSource& src);
  MateriaSource& operator=(const MateriaSource& src);
  ~MateriaSource();

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);
};

#endif  // MateriaSource_HPP