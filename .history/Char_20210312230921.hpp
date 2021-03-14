#ifndef CHAR_HPP
# define CHAR_HPP

# include <iostream>
# include <string>

class Char
{

	public:

		Char();
		Char( Char const & src );
		~Char();

		Char &		operator=( Char const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Char const & i );

#endif /* ************************************************************ CHAR_H */