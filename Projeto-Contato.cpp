/*Com a finalidade de registro de frequência associada à aula de 04/05/2021,
desenvolva um programa que permita a digitação (e posterior exibição),
dos dados relativos à classe "Contato" abaixo descrita:

---------------------
| Data              |
|-------------------|
| - dia: int        |
| - mes: int        |
| - ano: int        |
---------------------
-----------------------

| Contato             |
|---------------------|
| - email: string     |
| - nome: string      |
| - telefone: string  |
| - dtnasc: Data      |
|---------------------|
| + idade(): int      |
-----------------------
Implementar construtores, getter's e setter's.

OBSERVAÇÕES:

Utilizar a classe Data implementada durante os exemplos da aula;
Utilizar o ano de 2021 para o cálculo da idade ou buscar alternativa para pegar,
de forma automática, o ano do sistema operacional.
Implementar uma solução que permita cadastrar e exibir uma estrutura com 5 contatos
(ao exibir, informar nome, e-mail, telefone e idade).*/

#include <iostream>
#include <string.h>
using namespace std;

class Data
{
	private:
		int dia;
		int mes;
		int ano;
		int idade;
		
	public:
		int dia2=04, mes2=05, ano2=2021;
		
		Data(int dia, int mes, int ano, int idade)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
			this->idade = idade;
		}
		
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
			this->idade = 0;
		}
		
		void setDia(int dia)
		{
			this->dia = dia;
		}
		
		void setMes(int mes)
		{
			this->mes = mes;
		}

		void setAno(int ano)
		{
			this->ano = ano;
		}
		void setIdade(int idade)
		{
			this->idade = idade;
		}
		
		int getDia()
		{
			return this->dia;
		}
		
		int getMes()
		{
			return this->mes;
		}

		int getAno()
		{
			return this->ano;
		}
		int getIdade()
		{
			return this->idade;
		}
        
		
		string getData()
        {
        	Data *calc;
        	
        	calc = new Data(this->dia, this->mes, this->ano, this->idade);
        	
        	if(dia<=dia2 && mes<=mes2)
			{
				this->idade = ano2-ano;
			}
			else
			{
				this->idade = (ano2-ano)-1;
			}
 	        return "voce tem " + to_string(this->idade) + " anos de idade.";
        }
        
};
//------------------------------------------------------------------------------

class Contato
{
private:
		string email;
		string nome;
		string telefone;
		
public:
		Contato(string email, string nome, string telefone)
		{
			this->email = email;
			this->nome = nome;
			this->telefone = telefone;
		}
		Contato()
		{
			this->email = " ";
			this->nome = " ";
			this->telefone = " ";
		}
		void setEmail(string email)
		{
			this->email = email;
		}
		void setNome(string nome)
		{
			this->nome = nome;
		}
		void setTelefone(string telefone)
		{
			this->telefone = telefone;
		}
		
			string getEmail()
		{
			return this->email;
		}
			string getNome()
		{
			return this->nome;
		}
			string getTelefone()
		{
			return this->telefone;
		}
		
		string getDados()
        {
 	        return "- Email: " + this->email + "\n" + "- Nome: " + this->nome + "\n" + "- Telefone: " + this->telefone + "\n";
        }		
};
//------------------------------------------------------------------------------
int main(int argc, char** argv)
{
	string email, nome, telefone;
	int dia, mes, ano, idade, qnt;
	
	cout << "Digite a quantidade de contatos: ";
	cin >> qnt;
	
	Contato *cont[qnt];
	Data *cont2[qnt];
	
	for(int i=0; i<qnt; i++)
	{
	cout << (i+1) <<" Contato" << endl; 
	cout << "Digite o seu e-mail: ";
	cin >> email;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	cout << "Digite o seu telefone: ";
	cin >> telefone;
	
	cout << "Digite o dia do seu aniversario: ";
	cin >> dia;
	cout << "Digite o mes do seu aniversario: ";
	cin >> mes;
	cout << "Digite o ano do seu aniversario: ";
	cin >> ano;
	cout << endl;
	
	cont[i] = new Contato(email, nome, telefone);
	cont2[i] = new Data(dia, mes, ano, idade);
	}

	system("cls");
	for(int i=0; i<qnt; i++)
	{
	cout << (i+1) <<" Contato" << endl;
	cout << cont[i]->getDados() << endl;
	cout << cont2[i]->getData() << endl;
	cout << "---------------------";
	cout << endl;
	}
	
	return 0;
}
