#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double _limite_cheque_especial;

public:
    ContaCorrente(std::string titular, double saldo, double limite);

    double get_limite_cheque_especial();

    void usar_cheque_especial(double valor);
};

#endif