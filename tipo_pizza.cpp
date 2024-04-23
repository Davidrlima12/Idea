#include "tipo_pizza.h"
#include <iostream>
#include <string>

using namespace std;

tipo_pizza::tipo_pizza(string nome, int qtd_pedacos, string borda, string ingredientes[]) {
    this->nome = nome;
    this->qtd_pedacos = qtd_pedacos;
    this->borda = borda;
    for (int i = 0; i < 5; i++) {
        this->ingredientes[i] = ingredientes[i];
    }
}

string tipo_pizza::borda_recheada(int resposta) {
    cout << "\nA pizza vai ter borda recheada?\n\n1. Sim\n2. Nao\n\n";
    cin >> resposta;
    if (resposta == 1) {
        string sabor_borda;
        cout << "\nQual o sabor da borda?\n";
        cin >> sabor_borda;
        cout << "\n";
        return "borda de " + sabor_borda;
    }
    else {
        return "nenhuma borda";
    }
}

void tipo_pizza::status_pizza() {
    cout << "Sua pizza " << nome << " possui " << qtd_pedacos << " pedacos, " << borda << " e foi feita com os ingredientes: ";
    for (int i = 0; i < 5; i++) {
        if (ingredientes[i + 1].empty() && i != 4) {
            cout << ingredientes[i] << ".";
            break;
        }
        else if (!ingredientes[i].empty() && i != 4) {
            cout << ingredientes[i] << ", ";
        }
        else if (i == 4) {
            cout << ingredientes[i] << ".";
        }
    }
}