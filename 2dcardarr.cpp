#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() 

{
  int deck [13][4]; 
  string suits [4] = {"c", "h","s","d"};
  string values [13] = { "2", "3", "4", "5","6", "7"," 8" ,"9", "10"," J", "Q"," K" , "A"};

  for ( int val = 0; val < 13; val++ ) {

    for ( int suit = 0; suit < 4; suit++ ) {
      cout << values[val] << suits[suit] << " ";
    }
     cout << endl;

  }

  std::cin.get();
  return (0);
}
