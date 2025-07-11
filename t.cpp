#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;


    int width = noOfRows - (noOfRows/3); // 40 %
    int mid = ceil(width / 2.0);
    for (int i = 1; i <= noOfRows; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (
                i==1 && j<=width || 
                i<=noOfRows && j==mid
                )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}