#include <iostream>
using namespace std;
#define A 5

int main() {
 int valor[A];
 int maior = 0, menor = 1000;
 int posicaoMaior = 0, posicaoMenor = 1000;

//Entrada
 for(int i=0; i < A; i++){
   cin>>valor[i];
 }
//Processamento
 for(int i=0; i < A; i++){
   if(valor[i] > maior){
     maior = valor[i];
     posicaoMaior = i;
   }
   if (valor[i] < menor){
     menor = valor[i];
     posicaoMenor = i;
   }
 }
//
 cout<<"Posição Maior: "<<posicaoMaior+1<<endl;
 cout<<"Posição Menor: "<<posicaoMenor+1;
}