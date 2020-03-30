#include "repo.h"

Repo::Repo() {
	this->n = 0;
	this->p = 0;
}
Repo::~Repo() {
	this->n = 0;
	this->p = 0;
}
void Repo::addExamen(Examen& e) {
	this->examene[this->n++] = e;
}

Examen* Repo::getAll() {
	return this->examene;
}
int Repo::getSize() {
	return this->n;
}
void Repo::deleteExamen(char* nume) {
	int foundPos = 0;
	for (int i = 0;i < n;i++) { 
		if (strcmp(this->examene[i].getNume() , nume) ==0 ){
			foundPos = i;
		}
	}
	for (int i = foundPos;i < n;i++) {
		this->examene[i] = this->examene[i + 1];
	}
	this->n--;
}

void Repo::modifyNota(char* nume, int nota, int zi, int luna, int an, int notaNoua) {
	for (int i = 0;i < n;i++) {
		if (strcmp(this->examene[i].getNume(), nume) == 0 && examene[i].getNota() == nota && examene[i].getZi() == zi && examene[i].getLuna() == luna && examene[i].getAn() == an){
			this->examene[i].setNota(notaNoua);
		}
	}
}

void Repo::modifyData(char* nume,int nota, int zi,int luna ,int an ,int newZi,int newLuna,int newAn) {
	for (int i = 0;i < n;i++) {
		if (strcmp(this->examene[i].getNume(), nume) == 0 && examene[i].getNota() == nota && examene[i].getZi() == zi && examene[i].getLuna() == luna && examene[i].getAn() == an) {
			this->examene[i].setData(newZi, newLuna, newAn);
		}
	}
}

Examen* Repo::filterNotaMaiMareDecat(int nota) {
	Examen* l=new Examen[10];
	for (int i = 0;i < n;i++) {
		if (this->examene[i].getNota() > nota) {
			l[this->p++] = this->examene[i];

		}
		
	}
	return l;

}
int Repo::getFilterSize() {
	return this->p;
}
void Repo::adaugaBonus(char* nume) {
	for (int i = 0;i < n;i++) {
		if (strcmp(this->examene[i].getNume(), nume) == 0 && this->examene[i].getNota()<10 ) {
			this->examene[i].setNota(this->examene[i].getNota() + 1);

		}
		
	}
}