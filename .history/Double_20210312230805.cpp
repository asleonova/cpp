#include "Double.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Double::Double()
{
}

Double::Double( const Double & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Double::~Double()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Double &				Double::operator=( Double const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Double const & i )
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