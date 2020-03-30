#include<iostream>
#include<ostream>
#include<string>
#include "examen.h"
#include "teste.h"
#include "service.h"
#include "testeService.h"
using namespace std;

int main() {
	testAddExamen();
	testGetAll();
	testGetSize();
	testAddExamenService();
	testListExamene();
	testGetNumarExamene();
	testModifyNota();
	testModifyData();
	testGetNumarFilterExamene();
	testFilterNotaMaiMareDecat();
    testAdaugaBonus();
	cout << "All tests are good " << endl;
	Service s;
	int op=0;
	while (op != 8) {
        cout << "1. Citire examen " << endl;
		cout << "2. Afisarea tuturor examenelor " << endl;
		cout << "3. Modificare nota " << endl;
		cout << "4. Modificare data " << endl;
		cout << "5. Stergere examen " << endl;
		cout << "6. Afisarea tuturor examenelor cu nota mai mare decat o nota data " << endl;
		cout << "7. Adaugarea unui bonus de 1 punct pentru examenele sustinute de un student dat " << endl;
		cout << "8. Iesire " << endl;
		cout << "Alegeti optiunea ";
		cin >> op;

		switch (op) {
		case 1: {
			int n;
			cout << " Dati nr de examene";
			cin >> n;
			for (int i = 0;i < n;i++) {
				char nume[100];
				int nota, zi, luna, an;
				cout << "Dati numele studentului ";
				cin >> nume;
				cout << "Dati nota ";
				cin >> nota;
				cout << "Dati ziua ";
				cin >> zi;
				cout << "Dati luna ";
				cin >> luna;
				cout << "Dati an ";
				cin >> an;

				s.addExamen(nume, nota, zi, luna, an);
			}

			break;
		}
		case 2: {
			Examen* examene = s.listExamene();
			for (int i = 0;i < s.getNumarExamene();i++) {
				cout << "Nume: " << examene[i].getNume() << endl;
				cout << "Nota: " << examene[i].getNota() << endl;
				cout << "Data " << examene[i].getZi() << "." << examene[i].getLuna() << "." << examene[i].getAn() << endl;
				cout << "=================" << endl;
			}
			break;
		}
		case 3: { 
			char nume[100];
			int nota, zi, luna, an, notaNoua;
			cout << "Nume cautat "<<endl;
			cin >> nume;
			cout << "Nota cautata "<<endl;
			cin >> nota;
			cout << "Zi cauatata "<<endl;
			cin >> zi;
			cout << "Luna cautata "<<endl;
			cin >> luna;
			cout << "An cauatat " << endl;
			cin >> an;
			cout << "Nota noua  " <<endl;
			cin >> notaNoua;
			s.modifyNota(nume, nota, zi, luna, an, notaNoua);
			break;
		}
		case 4: {
			char nume[100];
			int nota, zi, luna, an, newZi,newLuna,newAn;
			cout << "Nume cautat " << endl;
			cin >> nume;
			cout << "Nota cautata " << endl;
			cin >> nota;
			cout << "Zi cautata " << endl;
			cin >> zi;
			cout << "Luna cautata " << endl;
			cin >> luna;
			cout << "An cauatat " << endl;
			cin >> an;
			cout << "Ziua noua " << endl;
			cin >> newZi;
			cout << "Luna noua " << endl;
			cin >> newLuna;
			cout << "An nou " << endl;
			cin >> newAn;
			s.modifyData(nume, nota, zi, luna, an, newZi, newLuna, newAn);
			break;
		}
		case 5: {
			char nume[100];
			cout << "Numele studentului pe care doriti sa o stergeti ";
			cin >> nume;
			s.deleteExamen(nume);
			break;
		}
		case 6: {
			int nota;
			cout << "Nota ";
			cin >> nota;
	
			Examen* examene=s.filterNotaMaiMareDecat(nota);
			for (int i = 0;i < s.getNumarFilterExamene();i++) {
				cout << "Nume: " << examene[i].getNume() << endl;
				cout << "Nota: " << examene[i].getNota() << endl;
				cout << "Data " << examene[i].getZi() << "." << examene[i].getLuna() << "." << examene[i].getAn() << endl;
				cout << "=================" << endl;
			}
			break;
		}
		case 7: {
			char nume[100];
			cout << " Nume student ";
			cin >> nume;
			s.adaugaBonus(nume);
			break;
		}
		default:
			break;
		}
	
	}
}