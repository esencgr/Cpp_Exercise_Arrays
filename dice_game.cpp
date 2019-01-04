#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    srand(time(NULL));
    int size;
    cout << "enter size = ";
    cin >> size;
    cout << endl;
    int n[size], s[size], score1=0, score2=0;

      for (int i=0; i<=size-1; i++){
            n[i] = 1 + rand() % 6;
            s[i] = 1 + rand() % 6;

            if (n[i] > s[i])
                score1++;
            else if (n[i] < s[i])
                score2++;
      }

        cout << "player1 = ";
        for (int i=0; i<=size-1; i++)
            cout << n[i] << "  ";
        cout << endl;

        cout << "player2 = ";
        for (int i=0; i<=size-1; i++)
            cout << s[i] << "  ";
        cout << endl << endl;

        if (score1 > score2)
            cout << "-- player1  WON --" << endl;
        else if (score1 < score2)
            cout << "-- player2  WON -- " << endl;
        else
            cout << "-- game is equal --" << endl;
        cout << "score = " << score1 << "--" << score2 << endl;
    cout << endl << endl;

}
