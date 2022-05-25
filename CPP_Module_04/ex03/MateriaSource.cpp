#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}
MateriaSource::MateriaSource(const MateriaSource& src) {}
MateriaSource& MateriaSource::operator=(const MateriaSource& src) {}
MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* m) {}

AMateria* MateriaSource::createMateria(std::string const& type) {}