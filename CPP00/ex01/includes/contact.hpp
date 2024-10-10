/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:14:01 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:14:02 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class PhoneContact
{
private:
    std::string UserName;
    std::string LastName;
    std::string id;
    std::string PhoneNumber;
    std::string Notes;
public:
    PhoneContact();

    ~PhoneContact();

    void SetValuesOrdered(std::string name, std::string last, std::string idn, std::string numb, std::string note);

    void PrintPhoneContact(void) const;

    std::string fetch_UserName() const;
	std::string	fetch_LastName() const;
	std::string	fetch_id() const;
	std::string	fetch_PhoneNumber() const;
	std::string fetch_notes() const;
    //once defined we wont modify it thus the const before the ";"
};

#endif