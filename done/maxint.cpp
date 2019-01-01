#include <iostream>
using namespace std;

int maximum(int [], int);

int main(){
    int arr[] = {-2, -4, -6, -1, -99};
    int len = sizeof(arr) / sizeof(*arr);
    int max_of_array = maximum(arr, len);
    cout << max_of_array << endl;
}

int maximum(int arr[], int size){
    int largest = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        else {
            continue;
        }
    }
    return largest;
}

