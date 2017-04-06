/*“Honor Pledge: I pledge that I have neither given
 * nor received any help on this assignment.”*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include "Player.h"

    hooper::hooper(){}
//------------------------------------------------------------------------------

    void hooper::shot1() {
//Bool array for Random Bool generator
        bool ray[3] = {
            false,
            true,
            false
        };

//base character array used to populate empty array
        char base[5] = {
            'H',
            'O',
            'R',
            'S',
            'E'
        };
        //empty character array used to show score or Letters
        char chance_1[5];
      /////////////////////////////////////////////////////////////////////
      // Random Bool generator for the shot probability
        int rando = int(rand() % 2 + 1);
        bool booler = ray[rando];
    ////////////////////////////////////////////////////////////////////////
    //if statement for Shot
        if (booler == true) {
            std::cout << "Player #1: Hit Shot!" << std::endl;

        }
        //if statement for misses
        else if (booler == false) {
////////this bit populates the score array ///////////////////////////////
            chance_1[counter] = base[counter];
            std::cout << "Player #1 missed: Added an ";
            std::cout << chance_1[counter] << std::endl;
            counter++;
///////////////////////////////////////////////////////////////////////////////
//event handling
        } else {

            std::cout << "something weird happened" << std::endl;
        }

    }
//-----------------------------------------------------------------------------
//echo of first function
    void hooper::shot2() {

        bool tay[3] = {
            false,
            true,
            false
        };


        char tase[5] = {
            'H',
            'O',
            'R',
            'S',
            'E'
        };
        char chance_1[5];




        int fando = int(rand() % 2 + 1);
        bool booler = tay[fando];
        if (booler == true) {
            std::cout << "Player #2: Hit Shot!" << std::endl;
        } else if (booler == false) {
            chance_1[counter2] = tase[counter2];
            std::cout << "Player #2 missed: Added an ";
            std::cout << chance_1[counter2] << std::endl;
            counter2++;

        } else {
            std::cout << "something weird happened" << std::endl;
        }




    }
    //end 
