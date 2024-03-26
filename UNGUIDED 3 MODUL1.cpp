#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<string, int> umur;

    umur["Alice"] = 20;
    umur["Bob"] = 25;
    umur["Charlie"] = 30;

  
    cout << "Umur Alice: " << umur["Alice"] << endl;
    cout << "Umur Bob: " << umur["Bob"] << endl;
    cout << "Umur Charlie: " << umur["Charlie"] << endl;

    return 0;
}