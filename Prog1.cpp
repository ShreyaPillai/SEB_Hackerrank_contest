#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
      while (t--) {
        int n;
        cin >> n;
        int count = 0;
        while (n >= 100) {
          n -= 100;
          count++;
        }
        while (n >= 20) {
          n -= 20;
          count++;
        }
        while (n >= 10) {
          n -= 10;
          count++;
        }
        while (n >= 5) {
          n -= 5;
          count++;
        }
        while (n >= 1) {
          n -= 1;
          count++;
        }
        cout << count << endl;

      }

    return 0;
}