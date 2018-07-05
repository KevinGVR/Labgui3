#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "Laberinto.h"
#include "Adyacencia.h"
#include <time.h>


/*
 * Simple C++ Test Suite
 */

void testLaberinto() {
    bool booleano = false;
    int cantidadVrts = 10;
    double probabilidadAdy = 0.2;
    int cantLab;
    srand (time(NULL));
    cantLab = rand() % 100 +10000;
    vector<int> vect;
    vect.resize(cantLab);    
    for(int i = 0; i <cantLab; i++){
        Laberinto laberinto(cantidadVrts, probabilidadAdy);
        vect[i]=laberinto.obtTotAdy();
        if (laberinto.obtTotVrt()!=10){
            std::cout << "%TEST_FAILED% time=0 testname=testLaberinto (PbsLaberinto) message=error Falló metodo contructor (cantidad vertices)" << std::endl;
        }
    }          
    
    int cant=0;
    for(int i=0;i<vect.size();i++){
        cant+= vect[i];
    }
    double average =cant/cantLab;
    for(int i=0;i<cantLab;i++)
        if (vect[i]-average<= 45){
            if (vect[i]-average >= -45){
                booleano = true;
         }
    }
    if (booleano == false)
    std::cout << "%TEST_FAILED% time=0 testname=testLaberinto (PbsLaberinto) message=error Falló metodo contructor" << std::endl;
}

void testLaberinto2() {   
    bool booleano = true;
    int contador;
    int vertice;    
    int pe;
    ifstream archivoEnterosEntrada("laberintop.txt", ios::in);
    Laberinto laberinto(archivoEnterosEntrada);
    char finLinea = ' ';

    archivoEnterosEntrada >> pe;
    
    // salta a la siguiente para leer el primer número de la línea #2
    archivoEnterosEntrada >> pe;
    while (!archivoEnterosEntrada.eof() && booleano) {
        contador = 0;
        while (!archivoEnterosEntrada.eof()&&(finLinea != 10)) { // 10 ascii de fin de línea
            archivoEnterosEntrada >> pe;
            archivoEnterosEntrada.get(); 
            finLinea = archivoEnterosEntrada.peek();
            if(!laberinto.xstAdy(contador, pe)){
               std::cout << "%TEST_FAILED% time=0 testname=testLaberinto2 (PbsLaberinto) message=error Fallo metodo constructor con lector archivos entre la "<< pe <<"y" <<contador <<""<< std::endl;
            }
            contador++;
        }
        
        if (!archivoEnterosEntrada.eof()){
        archivoEnterosEntrada >> pe;
        archivoEnterosEntrada.get();
        finLinea = archivoEnterosEntrada.peek();
        }
        contador++;
        vector<int> aux;
        laberinto.obtIdVrtAdys(vertice,aux);
        int cant = aux.size();
        if (contador != cant){
            booleano = false;
        }
        
        
 }
    if (!booleano)
        std::cout << "%TEST_FAILED% time=0 testname=testLaberinto2 (PbsLaberinto) message=error Fallo netodo constructor con lector archivos" << std::endl;   
}


void testLaberinto3() {
    bool booleano = true;
    int contador;
    int vertice;
    
   int pe;
    ifstream archivoEnterosEntrada("laberintom.txt", ios::in);
    Laberinto laberinto(archivoEnterosEntrada);
    char finLinea = ' ';

    archivoEnterosEntrada >> pe;
    
    // salta a la siguiente para leer el primer número de la línea #2
    archivoEnterosEntrada >> pe;
    while (!archivoEnterosEntrada.eof() && booleano) {
        vertice = 0;
        contador = 0;
        while (!archivoEnterosEntrada.eof()&&(finLinea != 10)) { // 10 ascii de fin de línea
            archivoEnterosEntrada >> pe;
            archivoEnterosEntrada.get(); 
            finLinea = archivoEnterosEntrada.peek();
            
            contador++;
        }
        
        if (!archivoEnterosEntrada.eof()){
        archivoEnterosEntrada >> pe;
        archivoEnterosEntrada.get();
        finLinea = archivoEnterosEntrada.peek();
        }
        
        vector<int> aux;
        laberinto.obtIdVrtAdys(vertice,aux);
        int cant = aux.size();
        if (contador != cant){
            booleano = false;
        }
        vertice ++;
        
 }
    if (!booleano)
        std::cout << "%TEST_FAILED% time=0 testname=testLaberinto3 (PbsLaberinto) message=error Fallo netodo constructor con lector archivos" << std::endl;   
}

void testLaberinto4() {
    bool booleano = true;
    int contador;
    int vertice;
    
   int pe;
    ifstream archivoEnterosEntrada("laberintom.txt", ios::in);
    Laberinto laberinto(archivoEnterosEntrada);
    char finLinea = ' ';

    archivoEnterosEntrada >> pe;
    
    // salta a la siguiente para leer el primer número de la línea #2
    archivoEnterosEntrada >> pe;
    while (!archivoEnterosEntrada.eof() && booleano) {
        vertice = 0;
        contador = 0;
        while (!archivoEnterosEntrada.eof()&&(finLinea != 10)) { // 10 ascii de fin de línea
            archivoEnterosEntrada >> pe;
            archivoEnterosEntrada.get(); 
            finLinea = archivoEnterosEntrada.peek();
            
            contador++;
        }
        
        if (!archivoEnterosEntrada.eof()){
        archivoEnterosEntrada >> pe;
        archivoEnterosEntrada.get();
        finLinea = archivoEnterosEntrada.peek();
        }
        
        vector<int> ady;
        laberinto.obtIdVrtAdys(vertice,ady);
        if (contador != ady.size()){
            booleano = false;
        }
        vertice ++;
        
 }
    if (!booleano)
        std::cout << "%TEST_FAILED% time=0 testname=testLaberinto3 (PbsLaberinto) message=error Fallo netodo constructor con lector archivos" << std::endl;   
}




void testCaminoMasCorto() {
    vector<int> camino;
    ifstream archivoEnterosEntrada("laberintop.txt", ios::in);
    Laberinto laberinto(archivoEnterosEntrada);
    int result = 0;
    bool booleano;
     
    result = laberinto.caminoMasCorto(0, 6, camino);
    if(camino[0]==0 && camino[1] ==6){
        booleano = true;
    }
    if (result!=1 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 1" << std::endl;
    } 
    
    booleano = false;
    result = laberinto.caminoMasCorto(0, 4, camino);
    if(camino[0]==0 && camino[1] ==4 && camino[2] == 5){
        booleano = true;
    }
    if (result!=2 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 2" << std::endl;
    }
    
    booleano = false;
    result = laberinto.caminoMasCorto(0, 3, camino);
    if(camino[0]==0 && camino[1] ==3 && camino[2] == 4 && camino[3]== 5){
        booleano = true;
    }
    if (result!=3 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 3" << std::endl;
    }
}

void testCaminoEncontrado() {
    vector<int> camino;
    ifstream archivoEnterosEntrada("laberintop.txt", ios::in);
    Laberinto laberinto(archivoEnterosEntrada);
    laberinto.asgVrtInicial(0);
    laberinto.asgVrtFinal(6);
    int result = 0;
    bool  booleano;
     
    result = laberinto.caminoEncontrado(8, 3, camino);
    if(camino[0]==8 && camino[1] ==3){
        booleano = true;
    }
    if (result!=1 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 1" << std::endl;
    }
    
    booleano = false;
    laberinto.asgVrtInicial(0);
    laberinto.asgVrtFinal(4);
    result = laberinto.caminoEncontrado(0, 4, camino);
    if(camino[0]==0 && camino[1] ==5 && camino[2] == 4){
        booleano = true;
    }
    if (result!=2 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 2" << std::endl;
    }
    
    booleano = false;
    laberinto.asgVrtInicial(0);
    laberinto.asgVrtFinal(3);
    result = laberinto.caminoEncontrado(0, 3, camino);
    if(camino[0]==0 && camino[1] ==2 && camino[2] == 8 && camino[3]== 3){
        booleano = true;
    }
    if (result!=3 && booleano) {
        std::cout << "%TEST_FAILED% time=0 testname=testCaminoMasCorto (PbsLaberinto) message=error distancia 3" << std::endl;
    }
}

void testSumaTotalFerormona() {
    ifstream archivoEnterosEntrada("laberintop.txt",ios::in);
    vector<int> vect;
    Laberinto laberinto(archivoEnterosEntrada);
    double cntAdy = laberinto.obtTotAdy();
    for(int i =0; i<laberinto.obtTotVrt();i++){
        laberinto.obtIdVrtAdys(i,vect);
        for(int j = 0; j<vect.size(); j++){
            
                Adyacencia a;
                a.asgCntFerormona(1.0);
                laberinto.asgDatoAdy(i, vect[j], a);
            
        }
    }
    double result = laberinto.sumaTotalFerormona();
    if (result != cntAdy) {
        std::cout << "%TEST_FAILED% time=0 testname=testSumaTotalFerormona (PbsLaberinto) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% PbsLaberinto" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testLaberinto (PbsLaberinto)" << std::endl;
    testLaberinto();
    std::cout << "%TEST_FINISHED% time=0 testLaberinto (PbsLaberinto)" << std::endl;

    std::cout << "%TEST_STARTED% testLaberinto2 (PbsLaberinto)" << std::endl;
    testLaberinto2();
    std::cout << "%TEST_FINISHED% time=0 testLaberinto2 (PbsLaberinto)" << std::endl;
    
    std::cout << "%TEST_STARTED% testLaberinto3 (PbsLaberinto)" << std::endl;
    testLaberinto3();
    std::cout << "%TEST_FINISHED% time=0 testLaberinto3 (PbsLaberinto)" << std::endl;
    
    std::cout << "%TEST_STARTED% testLaberinto4 (PbsLaberinto)" << std::endl;
    testLaberinto4();
    std::cout << "%TEST_FINISHED% time=0 testLaberinto4 (PbsLaberinto)" << std::endl;

    std::cout << "%TEST_STARTED% testCaminoMasCorto (PbsLaberinto)" << std::endl;
    testCaminoMasCorto();
    std::cout << "%TEST_FINISHED% time=0 testCaminoMasCorto (PbsLaberinto)" << std::endl;

//    std::cout << "%TEST_STARTED% testCaminoEncontrado (PbsLaberinto)" << std::endl;
//    testCaminoEncontrado();
//    std::cout << "%TEST_FINISHED% time=0 testCaminoEncontrado (PbsLaberinto)" << std::endl;

    std::cout << "%TEST_STARTED% testSumaTotalFerormona (PbsLaberinto)" << std::endl;
    testSumaTotalFerormona();
    std::cout << "%TEST_FINISHED% time=0 testSumaTotalFerormona (PbsLaberinto)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}