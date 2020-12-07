#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a;
    cin >> b;
    for(int j = a; j <= b; j++){
        if(j > 9){
            if (j % 2 == 0){
                cout << "even" << endl; 
            } else {
                cout << "odd" << endl;
            }
        } 
        string num [] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++){
            if (i == j){
                cout << num[i] << endl;
            }
        }
    }
   
    return 0;
}
