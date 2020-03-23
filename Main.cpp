#include<iostream>
#include<string>
#include "examen.h"
#include "teste.h"
#include "service.h"
using namespace std;

int main() {
	testAddExamen();
	testGetAll();
	testGetSize();
	cout << "All tests are good " << endl;
	int op;
	cout << "1. Citire examen " << endl;
	cout << "2. Afisarea tuturor examenelor " << endl;
	cout << "3. Iesire " << endl;
	cout << "Alegeti optiunea ";
	cin >> op;

	switch (op)
	{
	case 1:
		int n;
		cout << " Dati nr de examene";
		cin >> n;
		break;

	default:
		break;
	}
}