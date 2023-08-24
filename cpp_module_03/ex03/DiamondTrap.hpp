/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmin <yongmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:51:52 by suhwpark          #+#    #+#             */
/*   Updated: 2023/08/25 01:49:50 by yongmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private :
			std::string name;
	public	:
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &ob);
			DiamondTrap& operator=(DiamondTrap const &ob);
			~DiamondTrap();
			void	whoAmI();
			void 	printStatus(void);
};
#endif