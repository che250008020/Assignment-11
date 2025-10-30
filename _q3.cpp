#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[4];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter 3 characters: ";
    cin.getline(sub, 4); 

    int found = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == sub[0] && str[i+1] == sub[1] && str[i+2] == sub[2]) {
            found = 1;
            break;
        }
    }

    if(found)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
