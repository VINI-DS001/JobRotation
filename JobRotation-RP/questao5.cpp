#include <iostream>
#include <string.h>
using namespace std;

void revstr(char *strn1) {
    int i, tam, temp;
    tam = strlen(strn1);

    for(i = 0;i < tam/2;i++)
    {
        temp = strn1[i];
        strn1[i] = strn1[tam - i - 1];
        strn1[tam - i - 1] = temp;
    }
}

int main()
{
    char str[50] = "Fibonacci";
    cout << "String original: " << str;

    revstr(str);
    
    cout<< "\nString invertida: " << str;
    return 0;
}