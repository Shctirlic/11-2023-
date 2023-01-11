#pragma once
#include <string>

class hospital
{
public:

	void addPatient(const std::string &name);
	void removePatient(int key);
	void printAllPatients();

private:
	std::map<int, std::string> _patients;
	int _idCounter;


};

