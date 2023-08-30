#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria{
	public	:
			Cure();
			~Cure();
			Cure(Cure const &ob);
			Cure& operator=(Cure const &ob);
			AMateria *clone() const;
};
#endif