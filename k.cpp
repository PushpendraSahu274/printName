#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int noOfRows = 10;
    // cout << "Enter no of rows: ";
    // cin >> noOfRows;

    int width = noOfRows - (noOfRows) / 3 ; // 40 %
    int kKiDandi = ceil(noOfRows / 10.0);
    // 1,1              
    // 2,1           
    // 3,1        3,5        
    // 4,1      4,4     
    // 5,1    5,3  
    // 6,1 6,2     
    // 7,1   7,3       
    // 8,1    8,4         
    // 9,1     9,5
    //10,1       10,6        


    // *      *
    // *     *
    // *    *
    // *   *
    // *  * 
    // * * 6,3
    // *    7,4
    // *     8,5
    // *      9,6
    // *      10,7
    


    for(int i = 1; i <= noOfRows; i++){
        for(int j = 1; j <= width; j++){
            if(
                i <= noOfRows && j == 1 ||
                i >= width-kKiDandi && (i - j == noOfRows-width) && i > j ||
                i+j == width+1
            )
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}