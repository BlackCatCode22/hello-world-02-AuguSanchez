#include <iostream>
// sayHello.cpp
// Code warm up week 01 SOLUTION
// Augustin Sanchez 1/29/23

// Instructions: Understand every single key stroke of this program.
// Modify this program to get the user's answer to your greeting question and
// reply to the user with a nice message
// Advanced: create a decision control structure that processes user input and outputs a value depending on
// the input from the user.
using namespace std;

int main()
{
    //Greeting and asks for name
    cout << "Hello I am C++" << endl;

    string userInput;
     char response;
cout << "What is your name?";

    // Ask user for input 
     cin >> userInput;

for (int i=0; i<=6; i++)
    {
        cout << endl;
    }
//Responds and ask how your day has been
    cout << " Hello " << userInput << ", did you have a good day today? " << endl;
    
    // Answer yes or no
    cout << "Y/N?";
    
    cin >> response;
    //Response based on yes or no
    if (response =='Y') {
        cout << "Thats great to hear, I hope it continues that way.";
    }   
    
     else if (response == 'N') {
        cout << " Thats Okay, we all have those type of days." << endl;
     }
     //Response if not uppercase Y or N
        else {
            cout << "Hey are you messing with me? Hmm or maybe you didnt use a uppercase Y or N?"; 
        }
    
    return 0;
}
