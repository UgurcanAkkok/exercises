#include <iostream>
#define len 1024
using namespace std;

int howmany(char [], char);

int main(){
    char text[len];
    char chr;
    
    cout << "You will give me the text that is at most 1024 character, and then \
        the character that you want to be counted in text"<< endl;
    cout << "Enter text: ";
    cin.getline(text,len,'\n');
    cout << "Enter the character :";
    cin >> chr;

    cout << howmany(text,chr);
    return 0;
}

int howmany(char text[], char c){
    int counter = 0;
    for (int i = 0; i < len; i++){
        if (text[i] == c){
            counter++;
        }
    }
    return counter;
}
