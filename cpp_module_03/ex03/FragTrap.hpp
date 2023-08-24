/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmin <yongmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:50:19 by suhwpark          #+#    #+#             */
/*   Updated: 2023/08/25 01:49:59 by yongmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public	:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(FragTrap const &ob);
			FragTrap& operator=(FragTrap const &ob);
			~FragTrap();
			void	highFivesGuys();
};
#endif