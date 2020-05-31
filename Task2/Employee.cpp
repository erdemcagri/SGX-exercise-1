/*
 * Employee.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: benny
 */

#include "Employee.h"

Employee::~Employee() {}

int Employee::getID() const {
    return this->ID;
}

string Employee::getFirstname() const {
    return this->firstname;
}

string Employee::getLastname() const {
    return this->lastname;
}

int Employee::getSalary() const {
    return this->salary;
}

string Employee::getSecret() const {
    return this->secret;
}
