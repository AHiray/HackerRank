#include <iostream>
#include <cstdio>
#include<algorithm> 
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
bool comp(int a , int b){
    return (a < b);
}

int max_of_four(int a, int b, int c, int d){
    return std::max({a,b,c,d}, comp);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
