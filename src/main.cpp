
#include <iostream>
#include <string>
#include "Lista.hpp"
using namespace std;
int
main ()
{
  Lista l;
  int a = 0;
  int i = 1;
  int b = 0;
  int j = 1;
  int result = 0;


  cout << "De a linha de DNA a ser pesquisado (T A G C maiusculos): " << endl;
  cout << "(para parar, digite um caractere invalido)" << endl;
  cout << "(maximo de 300 characteres)" << endl;

  cin >> l.vetI[0].v[0];

  while (l.vetI[a].v[i - 1] == 'T' || l.vetI[a].v[i - 1] == 'A'
	 || l.vetI[a].v[i - 1] == 'G' || l.vetI[a].v[i - 1] == 'C')
    {
      cin >> l.vetI[a].v[i];
      i++;

      if (i == 3
	  && (l.vetI[a].v[i - 1] == 'T' || l.vetI[a].v[i - 1] == 'A'
	      || l.vetI[a].v[i - 1] == 'G' || l.vetI[a].v[i - 1] == 'C'))
	{
	  i = 0;
	  a++;
	}
    }

  cout << "De a linha de DNA de pesquisa (T A G C maiusculos): " << endl;
  cout << "(para parar, digite um caractere invalido)" << endl;
  cout << "(maximo de 300 characteres)" << endl;

  cin >> l.vet[0].v[0];

  while (l.vet[b].v[j - 1] == 'T' || l.vet[b].v[j - 1] == 'A'
	 || l.vet[b].v[j - 1] == 'G' || l.vet[b].v[j - 1] == 'C')
    {
      cin >> l.vet[b].v[j];
      j++;

      if (j == 3
	  && (l.vet[b].v[j - 1] == 'T' || l.vet[b].v[j - 1] == 'A'
	      || l.vet[b].v[j - 1] == 'G' || l.vet[b].v[j - 1] == 'C'))
	{
	  j = 0;
	  b++;
	}
    }


  cout << "===============================" << endl;
  cout << "Comparando cadeias..." << endl;
  cout << endl;
  l.ComparaCadeia (l, a);

  return 0;
}
