#include "Integer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Integer::Integer()
{
}

Integer::Integer( const Integer & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Integer::~Integer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Integer &				Integer::operator=( Integer const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Integer const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */