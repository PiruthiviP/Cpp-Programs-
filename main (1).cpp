
#include <iostream>

using namespace std;

int main() {
    int VAL[50];

  cout<<"Using traditional for loop\n";  
    for (int i = 0; i < 50; i++) {
        if (i < 25) {
            VAL[i] = i * i;
        } else {
            VAL[i] = 3 * i;
        }
    }
     int j = 0;
    for (int i = 0; i < 50; i++) {
        cout << VAL[i] << " ";
        j++;

        if (j == 10) {
            cout << endl;
            j = 0; 
        }
    }
    cout << endl; 
    cout<<"\n Using range based for loop\n";
    j=0;
    for(auto &range:VAL)
    {
        cout << range << " " ;  
        j++;

        if (j == 10) {
            cout << endl;
            j = 0; 
        }
    }

    return 0;
}