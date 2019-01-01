#include <iostream>
#define size 50
using namespace std;

// Write a function that swaps the characters of two input
// character arrays. Take two equal length strings and call 
// your function to swap them. Use char arrays, nothing else.

void swapit(char arr1[], char arr2[]);
void printarr(char arr[]);
int main(){
    //Take two string from user, find the size, print the strings,
    //call the function and print the strings again with new versions.
    char arr1[size];
    char arr2[size];
    
    cout<< "Enter two strings that are equal sized, with space seperated(Max 50 char)."<<endl;
    cin >>arr1>>arr2; 
    
    cout << "\nOld Values:\nFirst string:";
    printarr(arr1);
    cout << "\nSecond string :";
    printarr(arr2);

    swapit(arr1,arr2);
    cout << "\nNew Values:\nFirst string:";
    printarr(arr1);
    cout << "\nSecond string :";
    printarr(arr2);
    cout << endl;

}

void printarr(char arr[]){
    for (int i = 0; i < 50; i++){
        char chr = arr[i];
        if (chr == '\0'){
            break;
        }
        else {
            cout << chr ;
        }
    }
}
void assignarry(char arr1[], char arr2[]){
    for (int i = 0; i < size; i++){
        arr1[i] = arr2[i];
    }
}

void swapit(char arr1[], char arr2[]){
    char temp[size];
    assignarry(temp,arr1);
    assignarry(arr1,arr2);
    assignarry(arr2,temp);
}

