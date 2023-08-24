/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmin <yongmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:03:55 by suhwpark          #+#    #+#             */
/*   Updated: 2023/08/25 01:50:10 by yongmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	public	:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &ob);
			ScavTrap& operator=(const ScavTrap &ob);
			~ScavTrap();
			void	attack(const std::string &target);
			void	guardGate();
};

#endif