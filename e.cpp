#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int noOfRows = 10;

    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int mid = (noOfRows % 2) ? noOfRows / 2 + 1 : noOfRows / 2;
    int width = mid + 1;
    int eKiDanndi = ceil(noOfRows / 10);

    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (
                i <= noOfRows && j == 1 ||
                (i == 1 || i == mid || i == noOfRows ) && j <= width
            )
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 1; // exit code 0 -> success , non-zero -> execution failure
}