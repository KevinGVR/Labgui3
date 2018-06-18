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

Laberinto* Hormiga::laberinto_p = 0; // inicialización de variable static privada

Hormiga::Hormiga() {
}

Hormiga::Hormiga(const Hormiga& orig){
}

Hormiga::~Hormiga() {
}

bool Hormiga::salio() {
    return haSalido;
}

bool Hormiga::regreso() {
    return haRegresado;
}

char Hormiga::obtDestino() {
    return destino;
}

string Hormiga::obtMemoria() {
    return "[]";
}

void Hormiga::salir(int idVrtInicial) {

}

void Hormiga::mover(const Laberinto& lbrt) {

}

void Hormiga::asgLaberinto(Laberinto& lbrt) {
    Hormiga::laberinto_p = &lbrt; // asigna valor al puntero, indirectamente a referencia!!
}