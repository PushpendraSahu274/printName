#include <iostream>
using namespace std;

int main(){

    int noOfRows = 10;
    // cout << "Enter no of rows : ";
    // cin >> noOfRows; // 20

    int midRow = noOfRows / 2 ; // 10
    for(int i = 1; i <= noOfRows; i++){
        for(int j=1; j<=midRow; j++){
            if( i <= noOfRows && j == 1         ||
                i == 1 && j <= midRow           ||
                i <= noOfRows && j == midRow    ||
                i == midRow && j<= midRow    
            )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}