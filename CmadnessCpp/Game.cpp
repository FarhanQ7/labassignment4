/*“Honor Pledge: I pledge that I have neither given
 * nor received any help on this assignment.”*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include "Player.h"

//------------------------------------------------------------------------------
/*
The player objects are created, their functions are called until there is a
winner, then the user is prompted to play again, once the program terminates the
objects are deleted from the heap.*/
void runner() {
  //Player objects
  hooper * p1 = new hooper();
  hooper * p2 = new hooper();
  do {
      //-Shots fired
      ( * p1).shot1();
      ( * p2).shot2();

//while loop continues until someone wins
  } while (( * p1).counter < 5 and( * p2).counter2 < 5);
  if(( * p1).counter < ( * p2).counter2){
    std::cout<<"Player #1 Wins"<<std::endl;
  }
  else if(( * p2).counter2 < ( * p1).counter){
    std::cout<<"Player #2 Wins"<<std::endl;
  }
  delete[] p1; // objects are deleted
  delete[] p2;
}
//-----------------------------------------------------------------------------
int main() {
//-----------------------------------------------------------------------------
//variable created for looping
  srand(time(NULL));
  bool switcher = true;
  std::string condi;
//----------------------------------------------------------------------------
//This bit is the looping mechanism
  do {
      runner();
      std::cout << "Do you wana play again?" << std::endl;
      std::cin >> condi;
      if (condi == "yes") {
          switcher = true;
      } else if (condi == "no") {
          switcher = false;
      }

  } while (switcher == true);
	std::cout<<"Thanks For Playing"<<std::endl;
// the end


}
