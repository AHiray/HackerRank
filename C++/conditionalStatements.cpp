#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    string num [10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n < 10) 
    {
        int arrSize = sizeof(num)/sizeof(num[0]);
        for ( int i = 0; i < arrSize; i++){
            if (n == i){
                cout << num[i]; 
            }
        }
    }else {
        cout << "Greater than 9";
    }
    return 0;
}
            
