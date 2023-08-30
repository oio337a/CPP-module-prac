#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria{
	public	:
			Ice();
			~Ice();
			Ice(Ice const &ob);
			Ice& operator=(Ice const &ob);
			AMateria *clone() const;
};
#endif