#include <iostream>
#include <string>

using namespace std;

class Verbose {

private:
    string key;

public:
    Verbose(string title){
        key = title;
        cout << key << ": I'm born!\n";
    }
    ~Verbose(){
       cout << key << ": I'm gone!\n";
    }

};

Verbose global("global");

int main(){
    cout << "Start main()\n";

    Verbose local("local");

    Verbose* heap = new Verbose("heap");

    delete heap;

    cout << "End main()\n";
    return 0;
}