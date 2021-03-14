#include "Float.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Float::Float()
{
}

Float::Float( const Float & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Float::~Float()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Float &				Float::operator=( Float const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Float const & i )
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