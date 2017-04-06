//Header file where everything in player class is defined
#ifndef CRITTER_H_EXISTS
#define CRITTER_H_EXISTS
class hooper {
  public:
    hooper();
    //-------------------------------------------------------------------------
    //These variable are used to keep track of the "HORSE" letters and who wins
    int counter = 0;
    int counter2 = 0;
//-----------------------------------------------------------------------------
// These are the player action functions, which is how the players play the game
    void shot1();
    void shot2();


}; // end class def
#endif
