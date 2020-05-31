/*
 * EmployeeManager.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: benny
 */

#include "EmployeeManager.h"

EmployeeManager::EmployeeManager() {
}

EmployeeManager::~EmployeeManager() {
}

Employee EmployeeManager::readEmployeeInfo() {

	cout << "Enter the contact details" << endl;

	int ID = readInteger("Enter the employee ID:", "The employee ID has to be integer");
	string firstname = readString("Enter the first name:");
	string lastname = readString("Enter the last name:");
	int salary = readInteger("Enter the employee's salary", "The salary has to be integer");
	string secret = readString("Enter the secret:");

	Employee employee(ID, firstname, lastname, salary, secret);

	return employee;
}

int EmployeeManager::readInteger(string argStr, string errStr) {
	int result = -1;
	while (true) {
		cout << argStr << endl;
		string intStr;
		cin >> intStr;

		try {
			result = stoi(intStr);
			break;
		} catch (const invalid_argument& ia) {
			cout << errStr << endl;
		}
	}

	return result;
}

string EmployeeManager::readString(string argStr) {
	string result = "";
	while (string("").compare(result) == 0) {
		cout << argStr << endl;
		cin >> result;

		if (string("").compare(result) == 0) {
			cout << "Please enter something" << endl;
		}
	}

	return result;
}
