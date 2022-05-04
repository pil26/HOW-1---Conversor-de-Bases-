#include <iostream>
#include <math.h>   //biblioteca para calcular potencia
#include <stdlib.h> //biblioteca para limpar a tela
#include <locale.h> //biblioteca para passar para português

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Altera idioma para o Português
    int opcao;
    int resultadoBinario [8];
    bool rodando = true;
    while (rodando)
    {
        cout << "Conversor de Bases" << endl;
        cout << "1 - Decimal para Binário" << endl;
        cout << "2 - Binário para Decimal" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opção!" << endl;

        cin >> opcao;
        system("clear||cls"); //limpa a tela

        if (cin.fail()) //verifica se o valor digitado foi numérico
        {
            cout << "Erro, digite novamente!" << endl;
            cin.clear();
            cin.ignore(256,'\n');

        }
        else           //se o valor digitado foi numérico, segue
        {

            switch (opcao)
            {
                case 1:
                {
                        cout << "Digite o valor a ser convertido de Decimal para Binário" <<endl;
                        int decimal;
                        cin >> decimal;
                        for(int i = 7; i>=0; i--)
                        {
                            if (decimal % 2 == 0)
                            {
                             resultadoBinario [i] = 0;
                            }
                            else
                            {
                             resultadoBinario [i] = 1;
                            }
                            decimal = decimal / 2;
                        }
                        cout << "O resultado é: ";
                        for (int i = 0; i<=7; i++)
                        {
                            cout << resultadoBinario [i];
                        }
                        cout << endl;
                        cout << "\n" << endl;
                        break;
                }

                case 2:
                {
                        int binario;
                        int dec2 = 0;
                        cout << "Digite o valor em Binário para ser convertido para Decimal" << endl;
                        cin >> binario;
                        for(int i = 0; binario > 0; i++)
                        {
                            dec2 = dec2 + pow(2, i)*(binario % 10);
                            binario = binario / 10;
                        }
                        cout << "O resultado é: ";
                        cout << dec2 << endl;
                        cout << "\n" << endl;
                        break;
                }
                case 0:
                {
                        cout << "Obrigado por usar o conversor de bases do Paulo Lopes" <<endl;
                        rodando = false;
                        exit;
                        break;

                }
                default:
                    cout << "Opção inválida, digite uma opção válida!" << endl;
            }
        }
    }
}
