/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Erasmo G. Montoya
 *
 * Created on October 18, 2023, 7:39 AM
 */
#include "utils.hpp"
#include "Game.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    class Game juego;
    juego.cargar();
    cout<<"sss"<<endl;
    juego.mostrar();
//    juego.actualizar();
    return 0;
}

