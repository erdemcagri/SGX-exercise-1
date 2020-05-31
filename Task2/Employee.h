/*
 * Employee.h
 *
 *  Created on: Apr 19, 2019
 *      Author: benny
 */

#ifndef ENCLAVE_TASK1_UNTRUSTED_EMPLOYEE_H_
#define ENCLAVE_TASK1_UNTRUSTED_EMPLOYEE_H_

#include <string>

using namespace std;

class Employee {
   public:
    Employee(const int ID, const string firstname, const string lastname, const int salary, const string secret)
        : ID(ID), firstname(firstname), lastname(lastname), salary(salary), secret(secret){};
    virtual ~Employee();

    int getID() const;
    string getFirstname() const;
    string getLastname() const;
    int getSalary() const;
    string getSecret() const;

   private:
    int ID;
    string firstname;
    string lastname;
    int salary;
    string secret;
};

#endif /* ENCLAVE_TASK1_UNTRUSTED_EMPLOYEE_H_ */
