#include <iostream>
using namespace std;
int　accumlate(int n);

int main() {
    int number = 100;
    cout << "從1加到" << number << "總合為: "\
    << accumlate(number);
    return 0;
}
int accumlate(int n) {
    if (n==1){
        return 1;}
    return n+accumlate(n-1);
}


 

        
