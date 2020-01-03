#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int n){
    for(int i = 2 ; i<= n ; i++){
        if(n % i == 0)
            return i;
    }
}

int main(){
    int x;
    cout << "Input number : ";
    cin >> x;
    cout  << "Result : "<< findDivisor(x);
}