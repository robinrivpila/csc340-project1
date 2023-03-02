#include <iostream>
using namespace std;

// make main method and user input stuff
// create the method headers
//
int storeNewLocation(int *, int *, int);

int main()
{
bool isInUse = true;

    while (isInUse)
    {

        
        const int capacity = 10;
        int *longitude = new int[capacity];
        int *latitude = new int[capacity];
        int numOfElements = 0;

        for (int i = 0; i < capacity; i++)
        {
            longitude[i] = 0;
            latitude[i] = 0;
        }

        int userInput;
        cout << "Choose an option: "
             << "\n1)Store a new location"
             << "\n2)Remove a location"
             << "\n3)Show stored location"
             << "\n4)Exit" << endl;
        cin >> userInput;
        switch (userInput)
        {
        case 1:
            //trying to get numOfElements to actually update rn
            numOfElements = storeNewLocation(longitude, latitude,numOfElements);
            
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
        cout << "Num of Elements: " << numOfElements << endl;
    }
}

int storeNewLocation(int *xValues, int *yValues, int numOfElements)
{
    int x, y;
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;
    cout << "X coordinate: " << x << endl;
    cout << "Y coordinate: " << y << endl;
    return numOfElements++; 
}