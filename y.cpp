#include <iostream>
#include <cmath>
using namespace std;
// Y
int main()
{

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;


    // int width = ceil(noOfRows - (noOfRows/3.0)); // 40 %
    int mid = ceil(noOfRows / 2.0);
    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= noOfRows; j++)
        {
            if ( (i<= mid && i==j ) ||
                 (i+j == noOfRows+1)
                )
                cout <<"*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}