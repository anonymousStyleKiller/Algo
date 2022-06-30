#include "Сalculations.h"
#include <iostream>

using namespace std;

double f(double x){
    return 2*x;
}

namespace Lesson3 {
    int main() {
        double x;
        cin >> x;
        cout << f(x) << endl;
        return 0;
    }
}