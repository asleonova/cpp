#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include <iostream>
# include <string>

class Double
{

	public:

		Double();
		Double( Double const & src );
		~Double();

		Double &		operator=( Double const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Double const & i );

#endif /* ********************************************************** DOUBLE_H */