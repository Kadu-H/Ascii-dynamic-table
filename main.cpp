#include <iostream>
#include <cstring>
#include <math.h>

int binario[8];

int binaryToHexadecimal(){

    int parte1 = 0;
    int parte2 = 0;

    char caractere1;
    char caractere2;

    for(int i = 3;i >= 0;i--){
        parte1 = parte1 + binario[i] * pow(2,3-i);
    }

    for(int i = 7;i >= 4;i--){
        parte2 = parte2 + binario[i] * pow(2,7-i);
    }

    std::cout<<"\n";
    
    std::cout<<"0x";
    if(parte1>=10){
        caractere1 = parte1 + 55;
        std::cout<<caractere1;
    }
    else{
        std::cout<<parte1;
    }

    if(parte2>=10){
        caractere2 = parte2 + 55;
        std::cout<<caractere2;
    }
    else{
        std::cout<<parte2;
    }

    return 0;
}

int decimalToBinary(int codigo){
    int resto;

    std::cout<<"\n";

    for(int i = 7; i>=0; i--){
        resto = codigo%2;
        codigo = codigo/2;

        binario[i] = resto;
    }
    for(int i=0;i<=7;i++){
        std::cout<<binario[i];
    }
    binaryToHexadecimal();
    return 0;
}

int readString(){

    char caracteres[255];
    int codigoChar;

    std::cout<<"Digite a sequencia de caracteres: ";
    setbuf(stdin,0);

    fgets(caracteres,255,stdin);

    caracteres[strlen(caracteres)-1] = '\0';

    for(int i = 0; i<=strlen(caracteres)-1; i++){
        codigoChar = caracteres[i];
        std::cout<<"\n"<<caracteres[i]<<" = "<<codigoChar;
        decimalToBinary(codigoChar);
    }
    

    return 0;
}

int main(){
    readString();
    return 0;
}