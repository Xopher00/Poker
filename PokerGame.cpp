//Kris Price
#include <iostream>
#include <iomanip>  //format output
#include <ctime>  //time for random number seed
#include <cstdlib>  //Random number generator
using namespace std;

struct ACard{
        int number;
        char picture;
        };
//function prototypes
void InitiateCard(ACard []);
void shuffleCard (ACard [] /*int[], char[]*/);
void DisplayCard (ACard []);
void cardAce(char);
void cardTwo(char);
void cardThree(char);
void cardFour(char);
void cardFive(char);
void cardSix(char);
void cardSeven(char);
void cardEight(char);
void cardNine(char);
void cardTen(char);
void cardJack(char);
void cardQueen(char);
void cardKing(char);


int main(){   //initiates process
    //int  number[52];
    //char picture[52];
    ACard Card[52];

    InitiateCard(Card);
    shuffleCard( Card /*number, picture*/);
    DisplayCard( Card);

return 0;
}

void InitiateCard(ACard Card[]/*int number[], char picture[]*/){  //assigns values to cards via parallel arrays
    int i, d, count = 0;

    for(d =0; d < 52; d++){
            if(count < 13)
            count++; //count increments
            else
        count = 1; //count is reset after 13 increments
         Card->number[d] = count ;   // value of count assigned to array
    }
            for(i =0; i<13; i++){ //count gives 13 of each suit as i increments from 0 to 52
                count = 3;  // 13 hearts
                Card->picture[i] = count;}
            for (i = 13; i< 26; i++){
                count = 4; // 13 diamonds
                Card->picture[i] = count;}
            for (i = 26; i< 39; i++){
                count = 5; //13 cloves
                Card->picture[i] = count; }
            for(i = 39; i< 52; i++){
                count = 6; //13 spades
            Card->picture[i] = count;
    }
}

void shuffleCard(ACard Card[] /*int number[], char picture[]*/){//shuffles deck based on a pseudo-random number seeded by the computer's clock
int i;
ACard temp1;//, temp2;
srand(time(0)); // creates seed based on time
for(i=0; i < 51; i++){
int randomNumber = rand()%51+0; // limits pseudo-random number based on seed to the indexes of the arrays
temp1 = Card[i];
Card[i]=Card[randomNumber];
Card[randomNumber]=temp1;
  /*temp1 = number[i];   //swaps two random values in the parallel arrays
  temp2 = picture[i];
  number[i] = number[randomNumber];
  picture[i] = picture[randomNumber];
  number[randomNumber] = temp1;
  picture[randomNumber] = temp2;*/
}
}

void DisplayCard(ACard Card /*int number[], char picture[]*/){// creates a loop to assign 4 suits to each type of card, creating a picture for each
    for(int i = 0; i<5;i++){  //displays 5 random cards
        switch (number[i]){

    case 1:cardAce(picture[i]);
    break;
    case 2:cardTwo(picture[i]);
    break;
    case 3:cardThree(picture[i]);
    break;
    case 4:cardFour(picture[i]);
    break;
    case 5:cardFive(picture[i]);
    break;
    case 6:cardSix(picture[i]);
    break;
    case 7:cardSeven(picture[i]);
    break;
    case 8:cardEight(picture[i]);
    break;
    case 9:cardNine(picture[i]);
    break;
    case 10:cardTen(picture[i]);
    break;
    case 11:cardJack(picture[i]);
    break;
    case 12:cardQueen(picture[i]);
    break;
    case 13:cardKing(picture[i]);
    break;}
    }}



void cardAce(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"A"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"A"<<"|"<<endl;
cout<<"---------"<<endl;
}

void cardTwo(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"2"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(3)<<picture<<setw(5)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(5)<<picture<<setw(3)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"2"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardThree(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"3"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"3"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardFour(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"4"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"4"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardFive(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"5"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"5"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardSix(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"6"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"6"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardSeven(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"7"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(2)<<picture<<setw(2)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"7"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardEight(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"8"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(7)<<"8"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardNine(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"9"<<setw(7)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(7)<<"9"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardTen(char picture){
cout<<"---------"<<endl;
cout<<"|"<<"10"<<setw(6)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(4)<<picture<<setw(4)<<"|"<<endl;
cout<<"|"<<setw(2)<<picture<<setw(4)<<picture<<setw(2)<<"|"<<endl;
cout<<"|"<<setw(7)<<"10"<<"|"<<endl;
cout<<"---------"<<endl;}

void cardJack(char picture){
cout<<"---------"<<endl;
cout<<"|"<<picture<<"J"<<setw(6)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(6)<<"J"<<picture<<"|"<<endl;
cout<<"---------"<<endl;}

void cardQueen(char picture){
cout<<"---------"<<endl;
cout<<"|"<<picture<<"Q"<<setw(6)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(6)<<"Q"<<picture<<"|"<<endl;
cout<<"---------"<<endl;}

void cardKing(char picture){
cout<<"---------"<<endl;
cout<<"|"<<picture<<"K"<<setw(6)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(8)<<"|"<<endl;
cout<<"|"<<setw(6)<<"K"<<picture<<"|"<<endl;
cout<<"---------"<<endl;
}

//Sort 5 cards by number
//Insertion Sort
void SortCard(ACard FiveCard[]){
ACard InCard;
int pos;
char KeyPic;
for (int i=1; i<5; i++){
    InCard =FiveCard[i];
    pos = i;
    while(pos > 0 && InCard.number < FiveCard[pos-1].number) {
        FiveCard[pos] = FiveCard[pos-1];
        pos--;
        }
    FiveCard[pos] = InCard;
    }
}


