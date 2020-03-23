#include<iostream>
#include<ostream>
#include<string>
#include "repo.h"
#include "assert.h"
#include "teste.h"

using namespace std;
void testAddExamen() {
	cout << "Testing addExamen " << endl;
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Ion", "Ion");

	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Maria", "Maria");

	char* nume3 = new char[10];
	strcpy_s(nume3, sizeof "Anna", "Anna");

	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	//r.addExamen(e1);
	//r.addExamen(e2);
	//r.addExamen(e3);

	//assert(r.getSize() == 3);
}

void testGetSize() {
	cout << "Testing testGetSize " << endl;
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Ion", "Ion");

	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Maria", "Maria");

	char* nume3 = new char[10];
	strcpy_s(nume3, sizeof "Anna", "Anna");

	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	//r.addExamen(e1);
	//r.addExamen(e2);
	//r.addExamen(e3);

	//assert(r.getSize() == 3);
}

void testGetAll() {
	cout << "Testing testGetAll " << endl;
	char* nume1 = new char[10];
	strcpy_s(nume1, sizeof "Ion", "Ion");

	char* nume2 = new char[10];
	strcpy_s(nume2, sizeof "Maria", "Maria");

	char* nume3 = new char[10];
	strcpy_s(nume3, sizeof "Anna", "Anna");

	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	//r.addExamen(e1);
	//r.addExamen(e2);
	//r.addExamen(e3);

	//assert(r.getSize() == 3);
	//assert(r.getAll()[0].getNume() == nume1 && r.getAll()[1].getNume() == nume2 && r.getAll()[2].getNume() == nume3);

}