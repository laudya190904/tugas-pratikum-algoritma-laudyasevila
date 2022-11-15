#include <iostream>
using namespace std;

int main (){
    int nilai [2][2]={
    {50,60},
    {75,80},
    };

    nilai [1][1]=100;
    int i=nilai [1][1];

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << "Aray nilai  indeks ke-["<<i<<"]["<<j<<"] = "<<nilai [i][j] <<endl;
        }
    }

    cout << "Nilai Variabel i ke- : " << i << endl;
    return 0;

}
