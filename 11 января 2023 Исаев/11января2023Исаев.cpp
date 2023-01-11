#include <iostream>
#include <vector>
#include <map>
#include "hospital.h"
#include <set>

// class Hospital
// map _patients - ��������� ����
// ����� ��������� ���������
// � �������







class Hospital

public:

	Hospital()
	{


	
private:

	std::map<int, std::string> _patients{ { 1, "alex" } };

	const std::string& getPatient(int key) {
		const auto it = _patients.find(key);
		return it->second;
	

			void setPatient(const std::string &name) {
				_idCounter++;
				_patients.insert({ _idCounter, name });
	}

			int main()


				Hospital h;
			h.addpatient("Alex");
			h.addpatient("Anna");
			h.printAllPatients();
			std::cout << "==============\n";
			h.removePatient(1);
			h.printAllPatients();



			std::set<int> myset;
			 //��� ��� map, �� ��� ��������, ������ ������ �����








{
	std::vector<int> vec;
	vec.push_back(5); // 5
	vec.push_back(3); // 5 3

	std::vector<std::string> vec2("alex", "john");

	vec2.erase(vec2.begin() + 1);

	//push_back 0(1) - ����������� ���������
	//emplace - ���������� � �������� 0(n) n=size;
	// [2] [1] [1] [1] [1] [1] [1] - ������ ������
	//erase O(n)


	//����������� ����������

	for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++) {
		std::cout << *it << std::endl;
		vec2.erase(it); // �����������
	}

	std::vector<std::string>::const_iterator it = vec2.begin();
	vec2.erase(vec2.begin()); // ����� �������� �������� (���������) ������



	// map (�������) - ���������
	//����: ����-��������
	// ���� ������ ���� ����������

	std::map<int, std::string>mymap;
	std::map<int, std::vector <std::string >> bigMap;
	bigMap.insert({ 1,{"alex", "john"} });
	std::vector <std::string > someVec("Harry", "Alice");
	bigMap.insert({ 2, someVec });

	// bigMap 1 {"Alex", "John"}
	// bigMap 2 {"Harry", "Alice"}
	// bigMap.insert({1, {"dafgadfga"})); - �� ���������, ���� 1 �� ��������


	mymap.insert({ 1, "tom" });
	mymap.insert(std::make_pair(2, "abc"));


	for (const auto& [key, value] : mymap) {
		std::cout << key << " " << value;










	}

	Hospital::Hospital() : idCounter(0) {}

	void Hospital::addPatient(int key) {
		_patients.insert(key);
		_idCounter++;



	void Hospital::removePatient(int key) {
		_patients.erase(key);

	void Hospital ::printAllPatients()
	}

