#pragma once
#include "examen.h"
#include "repo.h"
class Service
{
private:
	Repo r;
public:
	Service();
	~Service();
	void addExamen(char* nume, int nota, int zi, int luna, int an);
	void deleteExamen(char* nume);
	void modifyNota(char* nume, int nota,int zi,int luna ,int an ,int notanoua);
	void modifyData(char* nume, int nota,int zi, int luna, int an,int newZi,int newLuna,int newAn);
	Examen* listExamene();
	int getNumarExamene();
	int getNumarFilterExamene();
	Examen* filterNotaMaiMareDecat(int nota);
	void adaugaBonus(char* nume);

};

