#include <iostream>
using namespace std;

int main()
{const int ingressoMin = 15;
 const int ingressoMagg = 18;
 int numMin,numMagg,totRagazzi,incassoMin,incassoMagg;
cout << "Quanti minorenni sono entrati nella discoteca ?" << endl;
cin>>numMin;
cout << "Quanti maggiorenni sono entrati nella discoteca ?" << endl;
cin>>numMagg;
totRagazzi=numMin+numMagg;
cout << "Complessivamente sono entrati " << totRagazzi << " ragazzi in discoteca." << endl;
incassoMin=numMin*ingressoMin;
incassoMagg=numMagg*ingressoMagg;
cout << "L'incasso per l'entrata dei minorenni e' : " << incassoMin << " euro" << endl;
cout << "L'incasso per l'entrata dei maggiorenni e' : " << incassoMagg << " euro" << endl;

 }

