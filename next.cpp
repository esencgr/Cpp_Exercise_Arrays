#include <iostream>
#include <math.h>
using namespace std;
double pi = 3.14159;
inline double area (double r) {return pi*r*r;}
int main(){
    double radius;
    cout << " enter radius of circle =";
    cin >> radius;
    cout << " the area of circle " << area(radius) << endl;
    return 0;
}
