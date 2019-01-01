#include <iostream>
#include <cctype>
using namespace std;

/* Count vowels, consonants,digits , spaces in a string */
int size = 4096;
int main(){
    char text [size];
    int vowels = 0;
    int cons = 0;
    int spaces = 0;
    int digit = 0;
    cout << "Enter any text and i will tell  how many vowels,"<<
            "consonants etc. in it"<<endl;
    cin.getline(text, '\n');
    for (int i = 0; i < size; i++){
        char crr = text[i];
        if (

}
