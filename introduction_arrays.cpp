#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a[10];
    cout << "element\t" << "value" << endl;
    for (int i=0; i<10; i++){
         a[i]=i;
         cout << i << "\t" << a[i] << endl;
    }
    return 0;
}
