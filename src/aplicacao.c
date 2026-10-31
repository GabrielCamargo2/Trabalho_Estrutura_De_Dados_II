#include <stdio.h>
#include "include/estacionamento.h"

struct veiculo
  {
  int ident;
  float metros;
  };

struct estacionamento
  {
  float tamanho_vias;
  struct veiculo *veiculo;
  };
