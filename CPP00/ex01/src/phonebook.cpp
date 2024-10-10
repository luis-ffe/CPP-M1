/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:52:02 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:13:24 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master_header.hpp"

Phonebook::Phonebook() : oldest_index(0), total_contacts(0) {
}

Phonebook::~Phonebook() {
}

void Phonebook::AddNewContact(std::string UserName, std::string LastName, std::string id, std::string PhoneNumber, std::string Notes) {
    phonebook[oldest_index].SetValuesOrdered(UserName, LastName, id, PhoneNumber, Notes);

    // Update the oldest_index to point to the next slot
    oldest_index = (oldest_index + 1) % 8;

    // Keep track of how many total contacts have been added, but limit it to 8
    if (total_contacts < 8)
        total_contacts++;
}

PhoneContact Phonebook::get_contact(int n) {
    return phonebook[n];
}

// Getter functions
std::string Phonebook::fetch_UserName(int n) {
    return phonebook[n].fetch_UserName();
}

std::string Phonebook::fetch_LastName(int n) {
    return phonebook[n].fetch_LastName();
}

std::string Phonebook::fetch_id(int n) {
    return phonebook[n].fetch_id();
}

std::string Phonebook::fetch_PhoneNumber(int n) {
    return phonebook[n].fetch_PhoneNumber();
}

std::string Phonebook::fetch_notes(int n) {
    return phonebook[n].fetch_notes();
}

int Phonebook::get_total_contacts() const {
    return total_contacts;
}
