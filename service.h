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
	void modifyNota(char* nume, int nota);
	void modifyData(char* nume, int zi, int luna, int an);
	Examen* listExamene();

};

