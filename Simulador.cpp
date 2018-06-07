/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Simulador.cpp
 * Author: Alan
 * 
 * Created on 19 de febrero de 2018, 02:53 PM
 */

#include "Simulador.h"

Simulador::Simulador(Laberinto& lbr): laberinto(lbr) {
    cantidadHormigas =0;
    hormigas.resize(cantidadHormigas);
    decrFerormona = 0;
    probMovimientoAzar =0;
}

Simulador::Simulador(const Simulador& orig): laberinto(orig.laberinto){
    cantidadHormigas = orig.cantidadHormigas;
    copy(orig.hormigas.begin(),orig.hormigas.end(),back_inserter(hormigas));
    orig.decrFerormona = decrFerormona;
    orig.probMovimientoAzar = probMovimientoAzar;
}

Simulador::~Simulador() {
}

void Simulador::iniciar(int idVrtInicial, int idVrtFinal, int cntHrm, double decrFerormona, double probMovimientoAzar) {
    // ANTES de crear las hormigas, asigna la referencia al laberinto que accesarán todas. 
    Hormiga::asgLaberinto(laberinto); // se asigna laberinto a hormigas
    if(laberinto.xstVrt(idVrtInicial) && laberinto.xstVrt(idVrtFinal)){
        cantidadHormigas = cntHrm;
        this->decrFerormona = decrFerormona;
        this->probMovimientoAzar = probMovimientoAzar;
    }
}

void Simulador::ejecutar(int p) {
    for(int i = 0 ; i<p ; i++){
        for(int j = 0; j< hormigas.size(); j++){
            hormigas[j].mover();
        }
    }
}