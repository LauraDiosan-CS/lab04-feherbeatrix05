#include<iostream>
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
void Service::modifyNota(char* nume,int nota) {
	r.modifyNota(nume, nota);
}
void Service::modifyData(char* nume, int zi, int luna ,int an) {
	r.modifyData(nume, zi,luna,an);
}

  Examen* Service::listExamene () {
	   return  r.getAll();
   }