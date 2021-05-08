#include "Squad.hpp"

Squad::Squad() : _count(0), _units(0)
{

}

Squad::Squad(Squad const & src)
{
	_count = src.getCount();
	_units = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_units[i] = src.getUnit(i)->clone();
}

Squad & Squad::operator=(const Squad & src)
{
	for (int i = 0; i < _count; i++)
		delete _units[i];
	if (_count > 0)
		delete [] _units;

	_count = src.getCount();
	_units = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_units[i] = src.getUnit(i)->clone();
	return (*this);
}

Squad::~Squad()
{
	for (int i = 0; i < _count; i++)
		delete _units[i];
	if (_count)
		delete [] _units;
}

int	Squad::push(ISpaceMarine* ptr)
{
	if (ptr == NULL)
		return (_count);
	for (int i = 0; i < _count; i++)
	{
		if (ptr == _units[i])
			return (_count);
	}
	
	ISpaceMarine**	new_units = new ISpaceMarine*[_count + 1];

	for (int i = 0; i < _count; i++)
		new_units[i] = _units[i];
	new_units[_count] = ptr;
	if (_count > 0)
		delete [] _units;
	_units = new_units;
	_count++;
	return (_count);
}

int Squad::getCount() const
{
	return(_count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i >= 0 && i < _count)
		return (_units[i]);
	return(0);
}