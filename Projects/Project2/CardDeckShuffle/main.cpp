/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 29th, 2018, 11:20 AM
 * Purpose:  Deck of Cards
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void filDeck(string [],int);     //Fill the deck Ace-King, Spade-Diamonds
void prnDeck(string [],int,int); //Print the Deck of Cards
void shuffle(string [],int,int); //Shuffle the Deck

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int NUMCRDS=52;  //Size of the Deck
    int n2Shufl=7;         //How many times to Shuffle the Deck
    string deck[NUMCRDS];  //52 Cards represented as a string Face|Suit

    //Initial Variables
    filDeck(deck,NUMCRDS);
    
    //Print the Cards
    cout<<"Fresh Deck of Cards before Shuffling"<<endl;
    prnDeck(deck,NUMCRDS,NUMCRDS/4);
    
    //Print the Cards
    shuffle(deck,NUMCRDS,n2Shufl);
    
    //Print the Cards
    cout<<"Deck of Cards after Shuffling"<<endl;
    prnDeck(deck,NUMCRDS,NUMCRDS/4);

    //Exit program!
    return 0;
}

void shuffle(string c[],int nCrd,int nShuf){
    for(int shuf=1;shuf<=nShuf;shuf++){
        for(int card=0;card<nCrd;card++){
            int indx=rand()%nCrd;
            string temp=c[card];
            c[card]=c[indx];
            c[indx]=temp;
        }
    }
}

void prnDeck(string c[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filDeck(string c[],int n){
    //Spades, Hearts, Clubs, Diamonds
    char suit[]={'S','H','C','D'};
    char face[]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    for(int i=0;i<n;i++){
        c[i]=face[i%13];
        c[i]+=suit[i/13];
    }
}