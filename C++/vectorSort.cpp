#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num; 
    cin >> num; 
    vector<int> sortList; 
    for(int i = 0; i < num; i++){
        int n; 
        cin >> n; 
        sortList.push_back(n); 
    }
    sort(sortList.begin(), sortList.end());
    for( int j: sortList){
        cout << j << " ";
    }
    return 0;
}
