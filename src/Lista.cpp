#include <iostream>
#include <string>
#include "Lista.hpp"

using namespace std;


void
Lista::ComparaCadeia (Lista l, int a)
{
  int maior = 0;
  int inicioAUX = 0;
  int finalAUX = 0;
  int i = 0;
  int j = 0;
  int x = 0;			//ints de manipulacao de for
  int y = 0;
  int i1 = 0;
  int j1 = 0;

  while (i < a)
    {
      if (vet[x].v[y] == vetI[i].v[j])
	{
	  inicioAUX = i;
	  i1 = i;
	  j1 = j;
	  while (vet[x].v[y] == vetI[i1].v[j1])
	    {
	      finalAUX = i1;
	      j1++;
	      y++;

	      if (j1 == 3)
		{
		  j1 = 0;
		  y = 0;
		  i1++;
		  x++;
		}
	    }
	  if ((finalAUX - inicioAUX) >= maior)
	    {
	      maior = (finalAUX - inicioAUX) + 1;
	      l.final = finalAUX;
	      l.inicio = inicioAUX;
	    }
	  finalAUX = 0;
	  inicioAUX = 0;
	}

      i++;			//como comparamos colons inteiros, apenas o i ser incrementado basta
    }
  cout << "A maior cadeia tem tamanho de: ";
  cout << maior << " colons, que comeca no " << l.inicio;
  cout << " colon e termina no " << l.final << " colon. \n";
}
