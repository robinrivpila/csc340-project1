#include <iostream>
using namespace std;

int storeNewLocation(int *, int *, int, int);
int removeLocation(int*, int* , int, int); 
void showStoredLocations(int*, int*, int); 

int main(){
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
        switch (userInput){
        case 1:
            numOfElements = storeNewLocation(longitude, latitude,numOfElements,capacity);  
            break;
        case 2:
            numOfElements = removeLocation(longitude, latitude, numOfElements, capacity); 
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
    }

    delete longitude;
    delete latitude; 
}

int storeNewLocation(int *xValues, int *yValues, int numOfElements, int capacity){
    if(numOfElements < capacity){
        int x, y;
        cout << "Enter X coordinate: ";
        cin >> x;
        xValues[numOfElements] = x; 
        cout << "Enter Y coordinate: ";
        cin >> y;
        yValues[numOfElements] = y; 
        cout << "Location " << x << ", " << y << " has been stored!" << endl; 
        return numOfElements+=1; 
    }else{
        cout << "Location List Capacity is full!" << endl; 
        return numOfElements;
    }
    
}

int removeLocation(int* xValues, int* yValues, int numOfElements, int capacity){
    int userInput; 
    cout << "The following locations are stored: " << endl; 
    showStoredLocations(xValues, yValues, numOfElements); 
    cout << "Which location would you like to remove? " << endl; 
    cin >> userInput; 
    if(userInput <= numOfElements && userInput > 0 ){
    int x = xValues[userInput-1];
    int y = yValues[userInput-1]; 

    if(userInput == numOfElements){
        xValues[userInput+1]=0;
        yValues[userInput+1]=0;
    }else{
        for(int i = userInput; i < numOfElements; i++){
        xValues[i-1]= xValues[i];  
        yValues[i-1]= yValues[i]; 
        }
    }
    numOfElements--;
    cout << "Location " << x << ", " << y << " has been removed from memory!" << endl; 
    }else{
        cout << "Invalid user input!" << endl; 
    }
    return numOfElements; 
}

void showStoredLocations(int* xValues, int* yValues, int numOfElements){
    cout << "Stored Locations: " << endl; 
    for(int i = 0; i< numOfElements; i++){
        cout << i+1 << ": " << xValues[i] << ", " << yValues[i] << endl; 
    }
}






