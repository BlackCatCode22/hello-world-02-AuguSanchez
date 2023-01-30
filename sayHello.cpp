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

    cout << " Hello " << userInput << ", did you have a good day today? " << endl;
    
    // Solution Below
    cout << "Y/N?";
    
    cin >> response;
    
    if (response =='Y') {
        cout << "Thats great to hear, I hope it continues that way.";
    }   
    
     else{
        cout << " Thats Okay, we all have those type of days." << endl;
    }
    return 0;
}
