#include <iostream>
using namespace std;

// make main method and user input stuff
// create the method headers
//


int main(){
    bool isInUse = true; 

    while(isInUse){
        int userInput; 
        cout << "Choose an option: " << "\n1)Store a new location" 
        << "\n2)Remove a location" << "\n3)Show stored location" 
        << "\n4)Exit" << endl; 
        cin >> userInput; 
        switch (userInput)
        {
        case 1:
            break;
        case 2: 
            break;
        case 3: 
            break; 
        case 4: 
            isInUse = false; 
            break; 
        default:
            break;
        }
    }
    
}