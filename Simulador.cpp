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

Simulador::Simulador(Laberinto& lbr): laberinto(lbr), decrFerormona(0.0), probMovimientoAzar(0.0) {
}

Simulador::Simulador(const Simulador& orig): laberinto(*(new Laberinto(orig.laberinto))) {
}

Simulador::~Simulador() {
}

void Simulador::iniciar(int idVrtInicial, int idVrtFinal, int cntHrm, double decrFerormona, double probMovimientoAzar) {
	Hormiga::asgLaberinto(laberinto);
}

void Simulador::ejecutar(int p) {

}