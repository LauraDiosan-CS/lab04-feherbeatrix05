#include "repo.h"

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
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

void Repo::modifyNota(char* nume, int nota) {
	for (int i = 0;i < n;i++) {
		if (strcmp(this->examene[i].getNume(), nume) == 0) {
             this->examene[i].setNota(nota);
		}
	}
}

void Repo::modifyData(char* nume, int zi,int luna,int an) {
	for (int i = 0;i < n;i++) {
		if (this->examene[i].getNume() == nume)
		this->examene[i].setData(zi,luna,an);

	}
}