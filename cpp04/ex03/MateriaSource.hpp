#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria * _learned[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator = (MateriaSource const & src);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif