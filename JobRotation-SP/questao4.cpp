#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    double valsp, valrj, valmg, vales, valoutros, soma, perc1, perc2, perc3, perc4;
    
    valsp=67836.43;
    valrj=36678.66;
    valmg=29229.88;
    vales=27165.48;
    valoutros=19849.53;
    
    soma = valsp + valrj + valmg + vales + valoutros;
    
    cout << "Valor total: " << soma;
    
    perc1 = (valsp/soma) * 100;
    perc2 = (valrj/soma) * 100;
    perc3 = (valmg/soma) * 100; 
    perc4 = (vales/soma) * 100;
    
    cout << "\n\nPercentual de SP: " << perc1 << "%\n";
    cout << "Percentual de RJ: " << perc2 << "%\n";
    cout << "Percentual de MG: " << perc3 << "%\n";
    cout << "Percentual de ES: " << perc4 << "%\n";

    return 0;
}