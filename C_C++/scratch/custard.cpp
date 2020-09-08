#include <iostream>
#include <string>
using namespace std;

class Custard; // forward declaration
std::ostream& operator<< (std::ostream& o, Custard &c);

class Custard { // Class for Frozen Custard (ice cream)!
    string kind;
    int scoops;
    public:
    Custard(string a_kind="vanilla", int a_scoops=1){
        kind = a_kind;
        scoops = a_scoops;
        cout << "Enjoy your " << scoops << " scoops of " << kind << " custard!" << endl;
    }
    Custard(int a_scoops) { 
        scoops = a_scoops;
        kind = "vanilla"; 
    }
    ~Custard() {
        cout << "Please recycle your cup!" << endl;
    }
    string getKind() const {
        return kind;
    }
    int& getScoops() {
        return scoops;
    }
};

std::ostream& operator<< (std::ostream& o, Custard &c)
{
    o << c.getScoops() << " scoops " << c.getKind() << " custard.";
    return o;
}

Custard mini("chocolate",3); // global variable

int main()
{
    Custard c;

    // CODE SNIPPET RUNS HERE
    Custard samehere = mini;
    cout << mini;

   

    return 0;
}
