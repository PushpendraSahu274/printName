#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int width = noOfRows / 2 ; // 40 %

    for(int i = 1; i <= noOfRows; i++){
        for(int j = 1; j <= width; j++){
            if(
                i <= noOfRows && j == 1   ||
                i == width && j <= width ||
                (i == 1 ||i == width)  && j <= width ||
                i <= width && j == width
            )
                cout <<"* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}