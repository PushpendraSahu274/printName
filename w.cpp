#include <iostream>
#include <cmath>
using namespace std;
// W
int main()
{

   int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;


    int width = noOfRows - (noOfRows/3); // 40 %
    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= noOfRows * 4; j++)
        {
            if (
                j <= noOfRows && i == j ||
                ((i>= noOfRows/2 )&&j-i == noOfRows) ||
                ((i>= noOfRows/2 )&&i+j == noOfRows*2 )||
                (i+j == noOfRows*3)
                )
                cout <<"*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}