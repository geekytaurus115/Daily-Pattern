#include<iostream>
using namespace std;

int main(){


    int height, width;
    
    cout <<"\nEnter the Height of W : ";
    cin >>height;

    width = (2 * height) - 1;

    cout <<endl;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j < width; j++){
            if(i == 1){
                if(j == i){
                    cout <<"*";
                }
                else{
                    cout <<" ";
                }
           }
           else{
                if(j == i || j == (width-i+1)){
                       
                   cout <<"*";
                }
                else{
                   cout <<" ";
                }
           }
       }
              
        for(int j = 1; j <= width; j++){
            if(j == i || j == (width-i+1)){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }

        cout <<endl;

    }

    cout << endl << endl;
    return 0;
}
