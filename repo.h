#pragma once
#ifndef REPO_H
#define REPO_H
#include "examen.h"


class Repo {
private:
	Examen examene[20];
	int n,p;
public:
	Repo();
	~Repo();
	void addExamen(Examen& e);
	Examen* getAll();
	int getSize();
	int getFilterSize();
	void deleteExamen(char* nume);
	void modifyNota(char* nume, int nota,int zi,int luna,int an ,int notanoua);
	void modifyData(char* nume,int nota, int zi, int luna, int an, int newZi, int newLuna, int newAn);
	Examen* filterNotaMaiMareDecat(int nota);
	void adaugaBonus(char* nume);

};
#endif
