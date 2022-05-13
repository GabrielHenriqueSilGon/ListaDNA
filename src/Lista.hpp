#ifndef __LISTA_HPP
#define __LISTA_HPP
#include <string>
#define MAXTAM 100
using namespace std;

struct Valor
{
  char v[3];
};


class Lista
{
public:
  Valor vetI[MAXTAM];
  Valor vet[MAXTAM];
  int inicio;
  int final;
  void ComparaCadeia (Lista l, int a);

};

#endif
