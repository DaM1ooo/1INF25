/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.hpp
 * Author: erasmog
 *
 * Created on June 7, 2023, 7:22 AM
 */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "item.hpp"
#include "backpack.hpp"


void load_items(Item *, int, const char *);
void load_backpacks(Backpack * , Item *, int , const char* );
void update_backpacks(Backpack * , int , int , Backpack &, Item * , int);


#endif /* FUNCTIONS_HPP */

