#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    
    cout << *a + *b << endl;
    cout << abs(*a - *b) << endl;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}