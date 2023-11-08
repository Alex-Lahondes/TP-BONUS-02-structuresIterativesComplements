#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    int j(0);
    int multiplePossible(0);
    bool choix = false;

    vector <int> table{1,2,3,4,5,6,7,8,9};
    vector <int> nbPremier{};

    cout << "Que voulez-vous faire ?\n"
            "0. savoir si un nombre n donne est premier ou pas.\n"
            "1. affiche les N premiers nombres premiers.\n";

    cin >> choix;

    if (!choix) {

        cout << "saisir un nombre :";
        cin >> n;

        cout << endl;

        for (int i = 0; i < 9; ++i) {

            if (n % table.at(i) == 0) {

                multiplePossible++;

            }

            if (multiplePossible > 2) {

                cout << n << " n'est pas un nombre premier.";
                break;

            }

        }

        if (multiplePossible <= 2) {

            cout << n << " est un nombre premier.";
        }
    }

    else if (choix) {

        cout << "saisir un nombre :";
        cin >> n;

        cout << endl;

        while (nbPremier.size() != n) {

            for (int i = 0; i <= table.size() ; ++i) {

                if (j%table.at(i)==0) {

                    multiplePossible++;

                }
            }

            if (multiplePossible > 2) {
                break;
            }
            else nbPremier.push_back(j);

            j++;

        }

        for (int i : nbPremier) {

            cout << i << " ";

        }

        }

    return 0;

    }