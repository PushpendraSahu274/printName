#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int noOfRows = 10; 

    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int rowsInWidth = noOfRows - noOfRows / 3;
    int rowsReduceInWidth = noOfRows  <= 10 ? 1 : ceil(noOfRows/20); // 20 -> 2 rows to not to print 


    for(int i=1; i<=noOfRows; i++){
        for(int j=1; j<=rowsInWidth; j++){
            if(
                i <= noOfRows  && j == 1 || 
                i == 1 && j <= rowsInWidth - rowsReduceInWidth  ||
                i > rowsReduceInWidth && i <= noOfRows - rowsReduceInWidth && j == rowsInWidth || 
                i == noOfRows && j <= rowsInWidth - rowsReduceInWidth 
            )
                cout << "* " ;
            else 
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}