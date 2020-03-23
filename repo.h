#pragma once
#ifndef REPO_H
#define REPO_H
#include "examen.h"


class Repo {
private:
	Examen examene[20];
	int n;
public:
	Repo();
	~Repo();
	void addExamen(Examen& e);
	Examen* getAll();
	int getSize();
	void deleteExamen(char* nume);
	void modifyNota(char* nume, int nota);
	void modifyData(char* nume, int zi, int luna, int an);
};
#endif
