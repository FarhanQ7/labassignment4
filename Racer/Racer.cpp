#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define RL 50

/*“Honor Pledge: I pledge that I have neither given
 * nor received any help on this assignment.”*/




//------------------------------------------------------------------------------------------------------------------
/* This Class contains everything used to move player A along the track(except the track 'array' which is defined in 
 * main, This class contains a random number generator ( which Ryan specifically mentioned to use in lecture) that 
 * spits out a number steps (referenced in the Assignment_2 PDF) that the character 'A' is suppose to move along the
 * Track 'array'.*/ 
class racer1{
	
	public:
	
		int randomNumber; // This is the random number of steps the character is suppose to move 
        	int* num = &randomNumber;/*Points to the address of randomNumber, used to manipulate real value of 
				randomNumber According to this C++ Reference Video --> https://youtu.be/W0aE-w61Cb8*/
        	int a = 0; // Used to set initial character position on track
        	int* ap = &a; // Pointer to int a
       		int numbers[5] = { 2, 5, -3, -2,-4 }; /* Set of random numbers used move character on track specified							     by Rayan in Assignment_2 PDF*/      
       
       	 
			
		//This function: moves the character along the track 'array' and outputs the track
		void AdvancRacerA(char track[]){
		
		
			int rando =rand()%5; /*variable used to get random value between o-4 so that randomNumber 
						could come from the numbers[] set*/
			//Forloop moves the character, keeps track of character, and outputs track
			for(int e=0; e<1;e++){	
					randomNumber = numbers[rando];
       /*moves character*/      	std::swap(track[*ap],track[abs(*ap+*num)]);  
/*keeps track of character position*/  *ap = abs(*ap+*num);
/*outputs track*/              		std::cout<<track<<std::endl;
					
				}
			}
				
	};
//------------------------------------------------------------------------------------------------------------------
// Class is simply just an echo of the first class with ssome very minor changes such as: the random number set is
// slightly in favor of player B as specified in the Assignment_2 PDF
class racer2{

	public:

		int randomNumber;
		int* num = &randomNumber;
		int a =0;
		int* ap = &a;
		int numbers[5] = {2,6,-3,-2,4};
		 void AdvanceRacerB(char track[]){

		int rando = rand()%5;
		for(int e=0; e<1;e++){
			randomNumber = numbers[rando];
		std::swap(track[*ap],track[abs(*ap+*num)]);

                       *ap = abs(*ap+*num);
                       std::cout<<track<<std::endl;
                              
                                               
                                
			}
		}

	};

//------------------------------------------------------------------------------------------------------------------





int main(){
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//where the Objects are created 

	racer1 ra;
	racer2 ba;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//where player A track is created
	char track[RL+5]; // defines track length
	track[0] = 'A'; // Places character A on track
	srand(time(NULL)); // seeds srand for random number generator
	for(int i =1;i<RL+5 ;i++){ // creates track for character A
                        track[i] = '.';
  
	               }
	track[RL] = '|';// creates finish line for character A
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//where player B track is created	
	char track2[RL+5];// defines track length                                                         
        track2[0] = 'B'; // Places character B on track        
        srand(time(NULL)); // seeds srand for random number generator                                                     
        for(int i =1;i<RL+5;i++){ // creates track for character B
                        track2[i] = '.';

                       }
	track2[RL] = '|'; // creates finish line for character B
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Finally this is where the program runs [ slight pun intended ;P] ~ get it.. cause spartan race....
	std::cout<<"Welcome to Ryan's Spartan Race!"<<std::endl; /* statement to prompt user; from example output
								   referenced in Assignment_2 PDF */
	std::cout<<"READY...SET...GO!"<<std::endl;
//////////////////////////////////////	///////////////////////////////////
//do loop runs until there is a winner 
	do{	
		ra.mover(track);
		ba.mover2(track2);
	}while(ra.a <49 and ba.a<49);
/////////////////////////////////////
//Last bit prompts users as shown per example output in Assignment_2 PDF
	        
	if(ra.a>=49){
		std::cout<<"AWSOME YOU ACTUALLY WON!"<<std::endl;
	}
	if(ba.a>=49){
		std::cout<<"Your Friend Won, Guess its time to train harder"<<std::endl;
	}

}
//THE END
//-------------------------------------------------------------------------------------------------------------------
