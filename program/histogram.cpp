#include <iostream>
using namespace std;
/*
 * Hosea Nicolas ANPP | 672021159
*/
int main() {
    //...
    int n, m = 0;
    int o,p;
    int nilai[9];
        //...
        cout
        << "[ H I S T O G R A M ]\n"
        << "...\n";
        //...
        do {
            cout << "masukkan nilai : ";
            cin >> n;
            nilai[m] = n;
            m++;
        } while (m < 9);
        //...
        system("cls");
        cout
                << "==[ H A S I L ]==\n\n"
                << "INDEX\t\t" << "NILAI\t\t\t" << "HISTOGRAM\n";
        //...
        for (o = 0; o < m; o++) {
            cout
                    << o << "\t\t"
                    << nilai[o] << "\t\t\t";
            for (p = 0; p < nilai[o]; p++) {
                cout << "*";
            }
            cout << "\n";
        }
        system("pause");
}
