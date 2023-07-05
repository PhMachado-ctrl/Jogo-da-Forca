#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    //Palavra e as letras que serão as alternativas que irão digitando, e a palavra que era se revelando.
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

   
    while(palavra[i] != '\0'){  // \0 caracter do Enter
        i++;
        tam++;
    }

    for(i=0;i<30;i++){
        secreta[i]='-';
    }

    //Rotina do Jogo
    while ((chances > 0)&&(acertos < tam))
    {
        /* code */
    }
    

    return 0;
}