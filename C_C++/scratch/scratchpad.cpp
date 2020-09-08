#include <iostream>
#include <string>
using namespace std;

class T {
    private:
    T(const T& copy) {}
    T& operator=(const T& t) {return *this;}

    public:
    T() {}
    ~T() {}
};


int main(){
    T t1;
    T t2;
    t1 = t2;
    return 0;
}