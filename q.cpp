#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int width = noOfRows - (noOfRows) / 3 ; // 40 %
    int qKiDandi = width;
    int i_j_diff = noOfRows-qKiDandi;
    int reducedInRow = ceil(noOfRows / 10.0);
    int noOfRowsForO = noOfRows - reducedInRow-1;
    int width_diff = width-reducedInRow;
    for(int i = 1; i <= noOfRows; i++){
        for(int j = 1; j <= width; j++){
            if(
                i <= noOfRowsForO && (j == 1 || j==width_diff) ||
                (i == 1 || i==noOfRowsForO) && j<= width_diff  ||
                i >= qKiDandi-reducedInRow && i-j == i_j_diff-1
            )
                cout <<"* ";
            else if(
                i>= qKiDandi && i-j == i_j_diff -1
            )
                 cout <<"* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}