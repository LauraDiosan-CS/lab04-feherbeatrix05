#include "examen.h"
#include<string.h>
#include<ostream>
#include<iostream>
using namespace std;

Examen::Examen() {
	this->nume = NULL;
	this->nota = 0;
	this->zi = 0;
	this->luna = 0;
	this->an = 0;

}

Examen::Examen(char* nume, int nota, int zi, int luna, int an) {
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->nota = nota;
	this->zi = zi;
	this->luna = luna;
	this->an = an;

}

Examen::Examen(const Examen& e) {
	cout << "copy constructor" << endl;
	this->nume = new char[strlen(e.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(e.nume), e.nume);
	this->nota = e.nota;
	this->zi = e.zi;
	this->luna = e.luna;
	this->an = e.an;

}

Examen::~Examen() {
	if (this->nume) {
		delete[] this->nume;
		this->nume = NULL;
	}
}

char* Examen::getNume() {
	return this->nume;
}

int Examen::getNota() {
	return this->nota;
}

int Examen::getZi() {
	return this->zi;
}

int Examen::getLuna() {
	return this->luna;

}

int Examen::getAn() {
	return this->an;
}


void Examen::setNume(char* nume)
{
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];

	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

void Examen::setNota(int nota) {
	this->nota = nota;
}

void Examen::setData(int zi, int luna, int an) {
	this->zi = zi;
	this->luna = luna;
	this->an = an;

}
