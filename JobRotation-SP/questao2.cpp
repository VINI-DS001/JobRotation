#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, proxNum = 0, n;

    cout << "Insira um numero: ";
    cin >> n;

    cout << "Sequencia de Fibonacci: " << t1 << ", " << t2 << ", ";

    proxNum = t1 + t2;

    while(proxNum <= n) {
        cout << proxNum << ", ";
        t1 = t2;
        t2 = proxNum;
        proxNum = t1 + t2;
    }
    
    if (n==t1 || n==t2){
        cout << "\nEh um Numero de fibonacci";
    }else{
        cout << "\nNao eh um numero de Fibonacci";
    }
            
    return 0;
}