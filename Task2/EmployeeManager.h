/*
 * EmployeeManager.h
 *
 *  Created on: Apr 19, 2019
 *      Author: benny
 */

#ifndef ENCLAVE_TASK1_UNTRUSTED_EMPLOYEEMANAGER_H_
#define ENCLAVE_TASK1_UNTRUSTED_EMPLOYEEMANAGER_H_

#include "Employee.h"

#include <iostream>

using namespace std;

class EmployeeManager {
   public:
    EmployeeManager();
    virtual ~EmployeeManager();

    Employee readEmployeeInfo();

   private:
    int readInteger(string argStr, string errStr);
    string readString(string argStr);
};

#endif /* ENCLAVE_TASK1_UNTRUSTED_EMPLOYEEMANAGER_H_ */
