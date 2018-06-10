/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: Fabian
 *
 * Created on 19 de mayo de 2018, 21:00
 */

#include <stdlib.h>
#include <iostream>
#include <string>
#include "Hormiga.h"

/*
 * Simple C++ Test Suite
 */

void testMover() {
    string aux;
    string var;
    char letra;
    int numero;
    int numeroady;
    vector<int> adys;
    bool booleano;
    ifstream archivoEnterosEntrada("laberintomini.txt", ios::in);
    Laberinto lbrt(archivoEnterosEntrada);
    Hormiga hormiga;
    hormiga.salir();
    hormiga.asgLaberinto(lbrt);
    hormiga.mover();
    aux = hormiga.obtMemoria();
    letra = aux[1];
            if(aux[2] != ','){
            var = aux[1] + aux[2];
            numero = atoi(var.c_str());
            }
            else{
            letra = aux[1];
            numero = (int)letra;
        }
    
        if(aux[5] != ','){
                var = aux[4] + aux[5];
                numeroady =  atoi(var.c_str());
        }
        else{
                letra = aux[1];
                numeroady = (int)letra;
        }    
           lbrt.obtIdVrtAdys(numero, adys);
    for(int j = 0; j<sizeof(adys); j++){
                   if(numeroady == adys[j]){
                       booleano = true;
                   }
           }
    if (!booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testMover (newsimpletest) message= no se movio al vertice adyacente" << std::endl;
    }          
}

void testMover2() {
    string aux;
    string var;
    char letra;
    int numero;
    int numeroady;
    vector<int> adys;
    bool booleano;
    ifstream archivoEnterosEntrada("laberintonano.txt", ios::in);
    Laberinto lbrt(archivoEnterosEntrada);
    Hormiga hormiga;
    hormiga.salir();
    hormiga.asgLaberinto(lbrt);
    hormiga.mover();
    aux = hormiga.obtMemoria();
    letra = aux[1];
            if(aux[2] != ','){
            var = aux[1] + aux[2];
            numero = atoi(var.c_str());
            }
            else{
            letra = aux[1];
            numero = (int)letra;
        }
    
        if(aux[5] != ','){
                var = aux[4] + aux[5];
                numeroady =  atoi(var.c_str());
        }
        else{
                letra = aux[1];
                numeroady = (int)letra;
        }    
           lbrt.obtIdVrtAdys(numero, adys);
    for(int j = 0; j<sizeof(adys); j++){
                   if(numeroady == adys[j]){
                       booleano = true;
                   }
           }
    if (!booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testMover (newsimpletest) message= no se movio al vertice adyacente" << std::endl;
    }          
}





int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testMover (newsimpletest)" << std::endl;
    testMover();
    std::cout << "%TEST_FINISHED% time=0 testMover (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testMover (newsimpletest)" << std::endl;
    testMover2();
    std::cout << "%TEST_FINISHED% time=0 testMover (newsimpletest)" << std::endl;

    
    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

