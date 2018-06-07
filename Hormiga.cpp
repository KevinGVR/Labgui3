/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hormiga.cpp
 * Author: Alan
 * 
 * Created on 7 de febrero de 2018, 05:53 PM
 */

#include "Hormiga.h"
#include "Laberinto.h"
#include "Adyacencia.h"
#include <string.h>
#include <time.h>

Laberinto* Hormiga::laberinto_p = 0; // inicialización de variable static privada

Hormiga::Hormiga() {
    memoria.resize(2,-1);
    idVrtActual =-1;
    haSalido=false;
    haRegresado=false;
    destino='F';
    enRetroceso=0;
    longitudSolucion=0;
    deltaFerormona=0;
}

Hormiga::Hormiga(const Hormiga& orig) {
    memoria.reserve(orig.memoria.size());
    copy(orig.memoria.begin(),orig.memoria.end(),back_inserter(memoria));
    idVrtActual = orig.idVrtActual;
    haSalido=orig.haSalido;
    haRegresado=orig.haRegresado;
    enRetroceso=orig.enRetroceso;
    longitudSolucion=orig.longitudSolucion;
    deltaFerormona=orig.deltaFerormona;
    destino = orig.destino;
}

Hormiga::~Hormiga() {
}

/* OBSERVADORES */

bool Hormiga::salio() {
    if(haSalido)
        return true;
return false;
}

bool Hormiga::regreso() {
    if(haRegresado)
        return true;
    return false;
}

char Hormiga::obtDestino() {
    return destino;
}

string Hormiga::obtMemoria() {
    string hilera = "[";
    for(int i=0;i<memoria.size();i++){
        if(i<memoria.size() - 1){
        hilera +=  memoria[i];
        hilera += ",";
        }else{
            if(i==sizeof(memoria) - 1){
                hilera = hilera + "]";
            }
        }
    }
}

/* MÉTODOS MODIFICADORES */

void Hormiga::salir() {
    Laberinto& laberinto = *laberinto_p; // para evitar notación ->
    int x = laberinto.obtIdVrtFinal(); // ejemplo de uso del laberinto
}

void Hormiga::mover(double probMovAzar) {
    Laberinto& laberinto = *laberinto_p; // para evitar notación ->
    int x = laberinto.obtIdVrtFinal(); // ejemplo de uso del laberinto
    vector<int>adys;
    laberinto_p->obtIdVrtAdys(idVrtActual,adys);
    srand((unsigned int) time (NULL));
    double r = ((double) rand() / (RAND_MAX));
    if(probMovAzar<r){
    
    }
}

void Hormiga::asgLaberinto(Laberinto& lbrt) {
    Hormiga::laberinto_p = &lbrt; // asigna valor al puntero, indirectamente a referencia!!
}
