#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> parsed; 
    stringstream check1(str);
    string intermediate;
    while(getline(check1, intermediate, ',')) 
    { 
        parsed.push_back(stoi(intermediate)); 
    } 
    return parsed;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
