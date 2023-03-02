#include <iostream>
using namespace std;

int storeNewLocation(int *, int *, int);
int removeLocation(int*, int* , int); 
void showStoredLocations(int*, int*, int); 


void printArray(int*, int); 

int main()
{
    bool isInUse = true;
    int numOfElements = 0;
    const int capacity = 10;
    int *longitude = new int[capacity];
    int *latitude = new int[capacity];
    for (int i = 0; i < capacity; i++)
    {
        longitude[i] = 0;
        latitude[i] = 0;
    }

    while (isInUse)
    {
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
            numOfElements = storeNewLocation(longitude, latitude,numOfElements);  
            break;
        case 2:
            numOfElements = removeLocation(longitude, latitude, numOfElements); 
            break;
        case 3:
            showStoredLocations(longitude, latitude, numOfElements); 
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
    xValues[numOfElements] = x; 
    cout << "Enter Y coordinate: ";
    cin >> y;
    yValues[numOfElements] = y; 
    cout << "Location " << x << ", " << y << " has been stored!" << endl; 
    return numOfElements+=1; 
}

int removeLocation(int* xValues, int* yValues, int numOfElements){
    int userInput; 
    cout << "The following locations are stored: " << endl; 
    showStoredLocations(xValues, yValues, numOfElements); 
    cout << "Which location would you like to remove? " << endl; 
    numOfElements--;
    cin >> userInput; 
    //THIS IS NOT WORKING PROPERLY
    for(int i = userInput; i < numOfElements; i++){
        xValues[userInput-1]= xValues[userInput];  
        yValues[userInput-1]= yValues[userInput]; 
    }
    return numOfElements; 
}

void showStoredLocations(int* xValues, int* yValues, int numOfElements){
    for(int i = 0; i< numOfElements; i++){
        cout << i+1 << ": " << xValues[i] << ", " << yValues[i] << endl; 
    }
}






