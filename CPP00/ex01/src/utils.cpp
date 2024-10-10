/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:39 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:13:40 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/master_header.hpp"

void ft_add_all(Phonebook *phonebook) {
    std::string UserName, LastName, id, PhoneNumber, Notes;

    while (true) {
        std::cout << "Enter First Name: ";
        std::getline(std::cin, UserName);
        if (UserName.empty()) {
            std::cout << "First Name cannot be empty. Please enter again.\n";
            continue;
        }

        std::cout << "Enter Last Name: ";
        std::getline(std::cin, LastName);
        if (LastName.empty()) {
            std::cout << "Last Name cannot be empty. Please enter again.\n";
            continue;
        }

        std::cout << "Enter USER ID: ";
        std::getline(std::cin, id);
        if (id.empty()) {
            std::cout << "ID cannot be empty. Please enter again.\n";
            continue;
        }

        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, PhoneNumber);
        if (PhoneNumber.empty()) {
            std::cout << "Phone Number cannot be empty. Please enter again.\n";
            continue;
        }

        std::cout << "Enter Notes: ";
        std::getline(std::cin, Notes);
        if (Notes.empty()) {
            std::cout << "Notes cannot be empty. Please enter again.\n";
            continue;
        }

        // If no field is empty, break the loop and add the contact
        break;
    }

    phonebook->AddNewContact(UserName, LastName, id, PhoneNumber, Notes);
    std::cout << "Successfully added/updated contact.\n";
}

void ft_search(Phonebook *phonebook) {
    std::string UserName;
    std::string LastName;
    std::string id;
    std::string count;
    int i;

    // Check if there are any contacts in the phonebook
    int total_contacts = phonebook->get_total_contacts();

    if (total_contacts == 0) {
        std::cout << "No contacts found.\n";
        return;
    }

    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "ID" << "|" << std::endl;
    
    // Display each contact's details
    for (int j = 0; j < total_contacts; j++) {
        UserName = phonebook->fetch_UserName(j);
        LastName = phonebook->fetch_LastName(j);
        id = phonebook->fetch_id(j);

        if (UserName.length() >= 10) {
            UserName.resize(9);
            UserName += ".";
        }
        if (LastName.length() >= 10) {
            LastName.resize(9);
            LastName += ".";
        }
        if (id.length() >= 10) {
            id.resize(9);
            id += ".";
        }

        std::cout << std::setw(10) << j + 1 << "|" << std::setw(10) << UserName << "|" << std::setw(10) << LastName << "|" << std::setw(10) << id << "|" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Please enter the contact's index to see more details:\n> ";
    std::getline(std::cin, count);
    if (std::cin.eof()) return;
    
    i = atoi(count.c_str());
    if (i >= 1 && i <= total_contacts) {
        phonebook->get_contact(i - 1).PrintPhoneContact();
    } else {
        std::cout << "No Contact Found\n";
    }
}
