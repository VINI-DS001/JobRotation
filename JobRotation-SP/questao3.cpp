#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int val, dias=20;
    double valor_faturamento[dias], soma=0, media;
    
    for(int i =0; i<dias; i++){
        cout << "Digite o valor de faturamento: ";
        cin >> valor_faturamento[i];
        
        soma = soma + valor_faturamento[i];
    }
    
    media = soma/dias;
    
    cout << "\n A soma eh: " << soma;
    cout << "\nA media eh: " << media;
    
    int min = INT_MAX, max = INT_MIN;
    for (int i: valor_faturamento)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    cout << "\nO menor elemento eh: " << min << endl;
    cout << "O maior elemento eh: " << max << endl;
    
    cout << "\nValor maior que a media nos dias: ";
    
    for(int i = 0; i<dias; i++){
        if(valor_faturamento[i] > media){
            cout << valor_faturamento[i] << ", ";
        }
    }

    return 0;
}