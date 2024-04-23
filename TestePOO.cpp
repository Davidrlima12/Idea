#include <iostream>
#include <string>
#include "tipo_pizza.h"

using namespace std;

int main()
{
    string pizzaNome, borda, ingredientes[5];
    int pizzaPedaco, resposta = 0, qtdIngrediente;

    cout << "Bem vindo ao Pizza Simulator!\n\nDe um nome para sua pizza:\n";
    cin >> pizzaNome;
    cout << "\nQuantos pedacos a pizza vai ter?\n";
    cin >> pizzaPedaco;
    
    borda = tipo_pizza::borda_recheada(resposta);

    cout << "Quantos ingredientes? (Max. 5)\n";
    cin >> qtdIngrediente;
    cout << "\n";

    for (int i = 0; i < qtdIngrediente; i++) {
        if (qtdIngrediente > 5) {
            qtdIngrediente = 5;
        }
        cout << "Digite o nome do " << i + 1 << "o ingrediente: ";
        cin >> ingredientes[i];
    }

    tipo_pizza pizza(pizzaNome, pizzaPedaco, borda, ingredientes);

    cout << "\nParabens, voce criou uma pizza!\n\n";

    pizza.status_pizza();

    cout << "\n\n";

    return 0;
}