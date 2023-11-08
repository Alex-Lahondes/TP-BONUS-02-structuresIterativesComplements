#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "saisir un nombre :";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (i%2==0) {
            for (int j = 0; j < n; ++j) {
                if (j%2==0) {
                    cout << " 4 ";
                }
                else cout << " 2 ";
            }
        }
        else
            for (int j = 0; j < n; ++j) {
                if (j%2==0) {
                    cout << " 2 ";
                }
                else cout << " 4 ";
            }

        cout << endl;
    }

    return 0;
}

