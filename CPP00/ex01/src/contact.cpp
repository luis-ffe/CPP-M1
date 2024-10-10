/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:46 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:13:47 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/master_header.hpp"

PhoneContact::PhoneContact(){  
}

PhoneContact::~PhoneContact(){ 
}

void PhoneContact::SetValuesOrdered(std::string name, std::string last, std::string idn, std::string numb, std::string note){
    UserName = name;
    LastName = last;
    id = idn;
    PhoneNumber = numb;
    Notes = note;
}

void PhoneContact::PrintPhoneContact(void) const{
	std::cout << "Name: " << this->UserName << std::endl;
	std::cout << "Surname: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->id << std::endl;
	std::cout << "Phone Number: " << this->PhoneNumber << std::endl;
	std::cout << "Darkest Secret " << this->Notes << std::endl;
}

std::string PhoneContact::fetch_UserName() const {
    return this->UserName;
}

std::string PhoneContact::fetch_LastName() const {
    return this->LastName;
}

std::string PhoneContact::fetch_id() const {
    return this->id;
}

std::string PhoneContact::fetch_PhoneNumber() const {
    return this->PhoneNumber;
}

std::string PhoneContact::fetch_notes() const {
    return this->Notes;
}
