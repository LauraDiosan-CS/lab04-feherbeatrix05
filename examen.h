#pragma once
#include<iostream>
#include<ostream>
using namespace std;

class Examen {
private:
	char* nume;
	int nota, zi, luna, an;


public:
	Examen();
	Examen(char* nume, int nota, int zi, int luna, int an);
	Examen(const Examen& e);
	~Examen();
	void setNume(char* nume);
	void setNota(int nota);
	void setData(int zi, int luna, int an);
	char* getNume();
	int getNota();
	int getZi();
	int getLuna();
	int getAn();
};
