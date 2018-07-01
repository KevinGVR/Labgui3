/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alan.calderon
 *
 * Created on 2 de abril de 2018, 10:31 AM
 */

#include <fstream>
#include <iostream>
using namespace std;

#include "Laberinto.h"
#include "Simulador.h"
#include "Hormiga.h"
/*
 * 
 */
int main(int argc, char** argv) {
//    Simulador simulador;
    cout<< "Que tipo de laberinto desea?"<<endl;
    cout<< "Ingrese 1 para Aleatorio, 2 para laberinto pequeño, 3 para laberinto mediano"<<endl;
    int in;
    cin >> in;
    cout<< "Ingrese el vertice inicial"<<endl;
    int ori;
    cin >> ori;
    cout<< "Ingrese el vertice destino"<<endl;
    int dest;
    cin >> dest;
    cout<< "Ingrese la cantidad de Hormigas"<<endl;
    int ants;
    cin >> ants;
    cout<< "Ingrese la cantidad de decremento de Ferormona"<<endl;
    int decre;
    cin >> decre;
    switch ( in )  
      {  
        case 1:  
            cout<< "Cuantos vertices desea que tenga el laberinto?"<<endl;
            int cant;
            cin>>cant;
            cout<< "Ingrese la probabilidad de Adyacencia (debe ser entre 0 y 1"<<endl;
            double proba;
            cin>>proba;
//            simulador.iniciar(ori,dest,ants,decre,prob);
            break;  
        case 2:  
   //         ifstream archivoEnterosEntrada("laberintop.txt", ios::in);
//            laberinto = new Laberinto(archivoEntrada);
           // simulador.
            break;
        case 3:   
//            ifstream archivoEnterosEntrada("laberintom.txt", ios::in);
//            Laberinto laberinto= new Laberinto(archivoEntrada);
            break;
        default:  
//            ifstream archivoEnterosEntrada("laberintop.txt", ios::in);
//            Laberinto laberinto= new Laberinto(archivoEntrada); 
//      } 
    
//    Simulador simulador(laberinto);
    int inicio = -1;
    int destino;
    int ants;
    double fero;
    double prob;
//    while ( laberinto.xstVrt(inicio)){
//        cout<< "Indique el vertice de Inicio"<<endl;
//            int inicio;
//    }
//    simulador.iniciar(inicio,destino,ants,fero,prob);
//    vector<int> adyacencias;
//    laberinto.obtIdVrtAdys(0, adyacencias); // se modifica "adyacencias"
    return 0;
    }
}
