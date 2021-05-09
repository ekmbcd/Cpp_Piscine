#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < 4 ; i++)
	{
		_learned[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (_learned[i] != NULL)
			delete _learned[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL)
			delete _learned[i];
		if (src._learned[i] != NULL)
			_learned[i] = src._learned[i]->clone();
		else
			_learned[i] = NULL;
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (_learned[i] == NULL)
		{
			_learned[i] = m;
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL)
		{
			if (_learned[i]->getType() == type)
			{
				return (_learned[i]->clone());
			}
		}
	}
	return (NULL);
}
