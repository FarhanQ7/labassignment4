#include <stdio.h> #include <string.h>
/*“Honor Pledge: I pledge that I have neither given
nor received any help on this assignment.”*/
// This function uses recursion to reverse a word in C. 

void reversedWord (char input [], int size) {
printf("please enter a word\n ","%c" ) ;
//creates variables to store each individual element of the array
char* a;
char* b;
char* c;
char* d;
char* e;
char* f;
char* g;
char* h;
char* i;
char* j;
gets(input);

// This portion assigns each element of the array to a variable 
a =input[0];
b =input[1];
c =input[2];
d =input[3];
e =input[4];
f =input[5];
g =input[6];
h =input[7];
i =input[8];
j =input[9];
// This portion prints the elements in reverse order.
printf(&j,"%c");
printf(&i,"%c");
printf(&h,"%c");
printf(&g,"%c");
printf(&g,"%c");
printf(&f,"%c");
printf(&e,"%c");
printf(&d,"%c");
printf(&c,"%c");
printf(&b,"%c");
printf(&a,"%c");
printf("\n ","%c");
printf("Do you want to play again? N = 0 , Yes = 1 \n");
int looper;
scanf("%d", &looper);
//This is the recursive portion that allows the user to exit or keep playing. 
if(looper== 1){

char in[10];

reversedWord(input[10],10 );
}
if(looper== 0){
printf(" Have a good one!" , "%c");
}
else{

printf("I dont understand?","%c");
}





}



// This is our main method that is responsible for running our program.

int main () {
//This is where the magic happens, i.e where the program runs. 
char name[10];
int size = 10;

reversedWord(&name[10],10);





}


