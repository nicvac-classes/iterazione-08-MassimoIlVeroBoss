#include <iostream>
using namespace std;

int main() {
  int N, M, Media, MediaClasse, Debito, NoDebito;
  string Nome;
  M = 0;
  Debito = 0;
  NoDebito = 0;
  MediaClasse = 0;
  do {
    cout << "Quanti studenti ci sono in classe?";
    cin >> N;
  }
  while (N <= 0);
  while (M < N){
    cout << "Inserire nome: ";
    cin >> Nome;
    cout << "Inserire media di informatica";
    MediaClasse = MediaClasse + Media;
    if (Media < 6){
        cout << "Prenderai il debito";
        Debito = Debito + 1;
    }else{
        cout << "Non prenderai il debito";
        NoDebito =  NoDebito + 1;
    }
       M = M + 1;
  }
     MediaClasse = MediaClasse / N;
     cout << "Gli studenti che prenderanno il debito sono " << Debito << ", quelli che non prenderanno il debito sono " << NoDebito << ". La media della classe è " << MediaClasse; 
}
