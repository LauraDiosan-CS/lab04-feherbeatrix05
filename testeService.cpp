#include<iostream>
#include<ostream>
#include<string>
#include "service.h"
#include "assert.h"
#include "testeService.h"

using namespace std;

	void testAddExamenService() {
		cout << "Testing addExamenService " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);

		assert(s.getNumarExamene() == 3);
	}

	void testListExamene() {
			cout << "Testing testListExamene " << endl;

			char nume1[100] = "Ion";
			char nume2[100] = "Ana";
			char nume3[100] = "Maria";
			Service s;
			s.addExamen(nume1, 9, 21, 3, 2020);
			s.addExamen(nume2, 10, 21, 3, 2020);
			s.addExamen(nume3, 9, 14, 2, 2020);

			assert(s.getNumarExamene() == 3);
			assert(strcmp(s.listExamene()[0].getNume(), nume1) == 0 && strcmp(s.listExamene()[1].getNume(), nume2) == 0 && strcmp(s.listExamene()[2].getNume(), nume3) == 0);

	
	}

	void testGetNumarExamene() {
		cout << "Testing GetNumarExamene " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);

		assert(s.getNumarExamene() == 3);
	}

	void testDeleteExamen() {
		cout << "Testing GetNumarExamene " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		s.deleteExamen(nume1);
		assert(s.getNumarExamene()==2);
	}
	void testModifyNota() {
		cout << "Testing modifyNota " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		s.modifyNota(nume2, 10, 21, 3, 2020, 8);

		assert(s.listExamene()[1].getNota() == 8);
	}
	void testModifyData() {
		cout << "Testing modifyData " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		s.modifyData(nume2, 10, 21, 3, 2020, 12,4,2020);

		assert(s.listExamene()[1].getZi() ==12 && s.listExamene()[1].getLuna() == 4 && s.listExamene()[1].getAn() == 2020);
	}

	void testGetNumarFilterExamene() {
		cout << "Testing GetNumarFilterExamene " << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 9, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		s.filterNotaMaiMareDecat(9);
		assert(s.getNumarExamene() == 3);
		assert(s.getNumarFilterExamene() == 1);
	}

	void testFilterNotaMaiMareDecat() {
		cout << "Testing FilterNotaMaiMareDecat" << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 7, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		assert(s.getNumarExamene() == 3);
		s.filterNotaMaiMareDecat(7) ;
		assert(s.getNumarFilterExamene() == 2);
	}

	void testAdaugaBonus() {
		cout << "Testing AdaugaBonus" << endl;
		char nume1[100] = "Ion";
		char nume2[100] = "Ana";
		char nume3[100] = "Maria";
		Service s;
		s.addExamen(nume1, 7, 21, 3, 2020);
		s.addExamen(nume2, 10, 21, 3, 2020);
		s.addExamen(nume3, 9, 14, 2, 2020);
		s.adaugaBonus(nume1);
		assert(s.listExamene()[0].getNota() == 8);
	}