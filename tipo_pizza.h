#ifndef TIPO_PIZZA_H
#define TIPO_PIZZA_H

#include <string>

using namespace std;

class tipo_pizza
{
public:
    string nome;
    int qtd_pedacos;
    string borda;
    tipo_pizza(string nome, int qtd_pedacos, string borda, string ingredientes[]);
    static string borda_recheada(int resposta);
    void status_pizza();

private:
    string ingredientes[5];
};

#endif