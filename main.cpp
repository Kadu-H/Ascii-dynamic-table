#include <iostream>
#include <cstring>

int readString(){

    char caracteres[255];
    int codigoChar;

    std::cout<<"Digite a sequencia de caracteres: ";
    setbuf(stdin,0);

    fgets(caracteres,255,stdin);

    caracteres[strlen(caracteres)-1] = '\0';

    for(int i = 0; i<=strlen(caracteres); i++){
        codigoChar = caracteres[i];
        std::cout<<"\n"<<caracteres[i]<<" = "<<codigoChar;
    }
    

    return 0;
}

int main(){
    readString();
    return 0;
}