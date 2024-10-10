/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:54 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:13:55 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class Phonebook
{
private:
    PhoneContact phonebook[8]; // Fixed array of 8 contacts
    int oldest_index;          // Tracks the index of the oldest contact
    int total_contacts;        // Keeps track of the total number of contacts added

public:
    Phonebook();
    ~Phonebook();
    void AddNewContact(std::string UserName, std::string LastName, std::string id, std::string PhoneNumber, std::string Notes);
    PhoneContact get_contact(int n);
    std::string fetch_UserName(int n);
    std::string fetch_LastName(int n);
    std::string fetch_id(int n);
    std::string fetch_PhoneNumber(int n);
    std::string fetch_notes(int n);
	int get_total_contacts() const;

};

#endif