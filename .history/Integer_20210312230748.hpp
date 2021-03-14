#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>
# include <string>

class Integer
{

	public:

		Integer();
		Integer( Integer const & src );
		~Integer();

		Integer &		operator=( Integer const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Integer const & i );

#endif /* ********************************************************* INTEGER_H */