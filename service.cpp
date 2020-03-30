#include<iostream>
#include<ostream>
#include<string>
#include "repo.h"
#include "examen.h"
#include "service.h"
using namespace std;

Service::Service() {

}

Service::~Service() {

}
void Service::addExamen(char* nume, int nota, int zi, int luna, int an) {
	Examen e1(nume, nota, zi, luna, an);
	r.addExamen(e1);
}

void Service::deleteExamen(char* nume) {
	r.deleteExamen(nume);
}
void Service::modifyNota(char* nume, int nota, int zi, int luna, int an, int notaNoua) {
	r.modifyNota(nume, nota, zi, luna, an, notaNoua);
}
void Service::modifyData(char* nume, int nota,int zi, int luna ,int an, int newZi, int newLuna, int newAn) {
	r.modifyData(nume,nota, zi,luna,an,newZi,newLuna,newAn);
}

  Examen* Service::listExamene () {
	   return  r.getAll();
   }

  int Service::getNumarExamene(){
	  return r.getSize();

  }
  int Service::getNumarFilterExamene() {
	  return r.getFilterSize();
  }
  Examen* Service::filterNotaMaiMareDecat(int nota) {
	  return r.filterNotaMaiMareDecat(nota);
  }
  void Service::adaugaBonus(char* nume) {
      return r.adaugaBonus(nume);
  }