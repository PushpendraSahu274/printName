#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int width = noOfRows - (noOfRows) / 3 ; // 40 %

    for(int i = 1; i <= noOfRows; i++){
        for(int j = 1; j <= noOfRows; j++){
            if(
                i <= noOfRows && (j == 1 || j == noOfRows) ||
                i == j
            )
                cout <<"* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}