/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmin <yongmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:52:59 by suhwpark          #+#    #+#             */
/*   Updated: 2023/08/25 01:49:40 by yongmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
	protected	:
			std::string name;
			unsigned int hitPoint;
			unsigned int energyPoint;
			unsigned int attackDamage;
	public	:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &ob);
			~ClapTrap();
			ClapTrap& operator=(const ClapTrap &ob); 
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};
#endif