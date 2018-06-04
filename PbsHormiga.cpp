///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//
///* 
// * File:   newsimpletest.cpp
// * Author: Fabian
// *
// * Created on 19 de mayo de 2018, 21:00
// */
//
//#include <stdlib.h>
//#include <iostream>
//#include <string>
//#include "Hormiga.h"
//
///*
// * Simple C++ Test Suite
// */
//
//void testHormiga() {
//    Hormiga hormiga();
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testHormiga (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testHormiga2() {
//    //const Hormiga& orig;
//   // Hormiga hormiga(orig);
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testHormiga2 (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testSalio() {
//    Hormiga hormiga;
//    bool result = hormiga.salio();
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testSalio (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testRegreso() {
//    Hormiga hormiga;
//    bool result = hormiga.regreso();
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testRegreso (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testObtDestino() {
//    Hormiga hormiga;
//    char result = hormiga.obtDestino();
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testObtDestino (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testObtMemoria() {
//    Hormiga hormiga;
//    string result = hormiga.obtMemoria();
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testObtMemoria (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testSalir() {
//    int idVrtInicial;
//    Hormiga hormiga;
//    hormiga.salir(idVrtInicial);
//    if (true /*check result*/) {
//        std::cout << "%TEST_FAILED% time=0 testname=testSalir (newsimpletest) message=error message sample" << std::endl;
//    }
//}
//
//void testMover() {
//    string aux;
//    string var;
//    char letra;
//    int numero;
//    int numeroady;
//    int* adys;
//    bool booleano;
//    ifstream archivoEnterosEntrada("laberintomini.txt", ios::in);
//    Laberinto lbrt(archivoEnterosEntrada);
//    Hormiga hormiga;
//    hormiga.salir(0);
//    hormiga.mover(lbrt);
//    aux = hormiga.obtMemoria();
//    letra = aux[1];
//            if(aux[2] != ','){
//            var = aux[1] + aux[2];
//            numero = (int)var;
//            }
//            else{
//            letra = aux[1];
//            numero = (int)letra;
//        }
//    
//        if(aux[5] != ','){
//                var = aux[4] + aux[5];
//                numeroady = (int)var;
//        }
//        else{
//                letra = aux[1];
//                numeroady = (int)letra;
//        }    
//           lbrt.obtIdVrtAdys(numero, adys);
//    for(int j = 0; j<sizeof(adys); j++){
//                   if(numeroady == adys[j]){
//                       booleano = true;
//                   }
//           }
//    if (!booleano) {
//        std::cout << "%TEST_FAILED% time=0 testname=testMover (newsimpletest) message= no se movio al vertice adyacente" << std::endl;
//    }          
//}
//
//void testMover2() {
//    string aux;
//    string var;
//    char letra;
//    int numero;
//    int numeroady;
//    int* adys;
//    bool booleano;
//    ifstream archivoEnterosEntrada("laberintonano.txt", ios::in);
//    Laberinto lbrt(archivoEnterosEntrada);
//    Hormiga hormiga;
//    hormiga.salir(0);
//    hormiga.mover(lbrt);
//    aux = hormiga.obtMemoria();
//    letra = aux[1];
//            if(aux[2] != ','){
//            var = aux[1] + aux[2];
//            numero = (int)var;
//            }
//            else{
//            letra = aux[1];
//            numero = (int)letra;
//        }
//    
//        if(aux[5] != ','){
//                var = aux[4] + aux[5];
//                numeroady = (int)var;
//        }
//        else{
//                letra = aux[1];
//                numeroady = (int)letra;
//        }    
//           lbrt.obtIdVrtAdys(numero, adys);
//    for(int j = 0; j<sizeof(adys); j++){
//                   if(numeroady == adys[j]){
//                       booleano = true;
//                   }
//           }
//    if (!booleano) {
//        std::cout << "%TEST_FAILED% time=0 testname=testMover (newsimpletest) message= no se movio al vertice adyacente" << std::endl;
//    }          
//}
//
//
//
//
//
//int main(int argc, char** argv) {
//    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
//    std::cout << "%SUITE_STARTED%" << std::endl;
//
////    std::cout << "%TEST_STARTED% testHormiga (newsimpletest)" << std::endl;
////    testHormiga();
////    std::cout << "%TEST_FINISHED% time=0 testHormiga (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testHormiga2 (newsimpletest)" << std::endl;
////    testHormiga2();
////    std::cout << "%TEST_FINISHED% time=0 testHormiga2 (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testSalio (newsimpletest)" << std::endl;
////    testSalio();
////    std::cout << "%TEST_FINISHED% time=0 testSalio (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testRegreso (newsimpletest)" << std::endl;
////    testRegreso();
////    std::cout << "%TEST_FINISHED% time=0 testRegreso (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testObtDestino (newsimpletest)" << std::endl;
////    testObtDestino();
////    std::cout << "%TEST_FINISHED% time=0 testObtDestino (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testObtMemoria (newsimpletest)" << std::endl;
////    testObtMemoria();
////    std::cout << "%TEST_FINISHED% time=0 testObtMemoria (newsimpletest)" << std::endl;
////
////    std::cout << "%TEST_STARTED% testSalir (newsimpletest)" << std::endl;
////    testSalir();
////    std::cout << "%TEST_FINISHED% time=0 testSalir (newsimpletest)" << std::endl;
//
//    std::cout << "%TEST_STARTED% testMover (newsimpletest)" << std::endl;
//    testMover();
//    std::cout << "%TEST_FINISHED% time=0 testMover (newsimpletest)" << std::endl;
//
//    std::cout << "%SUITE_FINISHED% time=0" << std::endl;
//
//    return (EXIT_SUCCESS);
//}
//
