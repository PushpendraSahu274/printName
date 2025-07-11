#include <iostream>
using namespace std;

int main()
{

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    // * * * * * *
    // *
    // *
    // *     * * *
    // *     *   *
    // * * * *   *

    int mid = (noOfRows % 2) ? (noOfRows / 2) + 1 : noOfRows / 2;

    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= noOfRows; j++)
        {
            if (
                i <= noOfRows && j == 1 ||
                i == 1 && j <= noOfRows ||
                i == noOfRows && (j <= mid || j == noOfRows) ||
                i >= mid && (j == mid || j==noOfRows) ||
                i == mid && j > mid
            )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}