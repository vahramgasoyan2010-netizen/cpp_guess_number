#include <iostream>
#include <ctime>
using namespace std;

int main(){

   srand(time(0));
    int secret = 1 + rand() % 10;
    int guess;
    
     cout << "Guess a number between 1 and 10: ";
     cin >> guess;
     
      if(guess == secret){	
      
      	cout << "Correct!";
      	
    }
      else{
      	
      	cout << "Wrong. The number was: " << secret;
      	
	   }
	
	return 0;
}
