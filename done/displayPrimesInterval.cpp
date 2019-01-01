#include <iostream>
#include <cmath>
using namespace std;

void printPrimes(int begin, int end){
    
    for (int i = begin; i <= end; i++){
        bool isPrime = true;
        switch (i){
            case 0:
            case 1: isPrime = false;break;
        }
        for (int j = 2; j <= sqrt(i) ; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << endl;
        }
    }
}

int main(){
    int begin = 0;
    int end = 0;

    cout << "Enter the interval's first and last numbers with space seperated" << endl;
    cin >> begin >> end;
    while(begin < 0 || begin >= end){
        cout << "Please enter a positive and proper interval as follows.\n BEGIN END " << endl;
        cin >> begin >> end;
    }
    printPrimes(begin,end);
    
    return 0;
}
