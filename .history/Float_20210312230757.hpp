#ifndef FLOAT_HPP
# define FLOAT_HPP

# include <iostream>
# include <string>

class Float
{

	public:

		Float();
		Float( Float const & src );
		~Float();

		Float &		operator=( Float const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Float const & i );

#endif /* *********************************************************** FLOAT_H */