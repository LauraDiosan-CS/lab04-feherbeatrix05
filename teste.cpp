#include<iostream>
#include<ostream>
#include<string>
#include "repo.h"
#include "assert.h"
#include "teste.h"

using namespace std;
void testAddExamen() {
	cout << "Testing addExamen " << endl;
	char nume1[100] = "Ion";
	char nume2[100] = "Ana";
	char nume3[100] = "Maria";
	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	r.addExamen(e1);
	r.addExamen(e2);
	r.addExamen(e3);

	assert(r.getSize() == 3);
}

void testGetSize() {
	cout << "Testing testGetSize " << endl;
	char nume1[100] = "Ion";
	char nume2[100] = "Ana";
	char nume3[100] = "Maria";
	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	r.addExamen(e1);
	r.addExamen(e2);
	r.addExamen(e3);

	assert(r.getSize() == 3);
}

void testGetAll() {
	cout << "Testing testGetAll " << endl;
	
	char nume1[100] = "Ion";
	char nume2[100] = "Ana";
	char nume3[100] = "Maria";
	Examen e1(nume1, 9, 21, 3, 2020);
	Examen e2(nume2, 10, 21, 3, 2020);
	Examen e3(nume3, 9, 14, 2, 2020);
	Repo r;
	r.addExamen(e1);
	r.addExamen(e2);
	r.addExamen(e3);

	assert(r.getSize() == 3);
	assert(strcmp (r.getAll()[0].getNume() , nume1)==0 && strcmp(r.getAll()[1].getNume() , nume2)==0 && strcmp(r.getAll()[2].getNume() , nume3)==0);

}