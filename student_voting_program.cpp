#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define answer_size 40
#define freq_size 11
using namespace std;

int main(){
    srand(time(NULL));
    int frequency[freq_size] = {0};
    int answers[answer_size];
    int response, voting, count=0;
    cout << "-- voting distribution --"<<endl;
        for (int i=0; i<=answer_size-1; i++){
            answers[i] = 1 + rand() % 10;
            cout << answers[i] << "\t";
            count++;
            if (count % 10 == 0 )
                cout << endl;
        }

        for (response=0; response<=answer_size-1; response++)
            ++frequency [answers [response]];

        cout << endl;
        cout << "-- voting result --" << endl;
        cout << "voting\t" << "frequency" << endl;

        for (voting=1; voting <= freq_size-1; voting++)
            cout << voting << "  \t" << frequency[voting] << endl;

    return 0;
}
