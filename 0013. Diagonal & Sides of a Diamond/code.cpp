#include <iostream>
using namespace std;


int main()
{
    int i, j, n;
    cout << "Enter the number(must be odd) of rows : ";
    cin >> n;  
    
    cout << endl;
    
    int num1 = n / 2 * 3;
    for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){

        if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
            cout << "*";
        else
            cout << " ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;

}
