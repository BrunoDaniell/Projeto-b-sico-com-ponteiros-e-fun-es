#include <iostream>

using namespace std;

// função atenção
string atencao() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	string mensagem = "";
	for (int i = 0; i < 18; ++i) {
		mensagem += "=";
	}
	mensagem += "  ATENÇÃO! ";
	for (int i = 0; i < 18; ++i) {
		mensagem += "=";
	}
	return mensagem;
}


// função para trocar os valores de duas variaveis usando ponteiros
void trocaDeValores(int* primeiro, int* segundo) {
	int i;

	i = *primeiro;
	*primeiro = *segundo;
	*segundo = i;
}

// função agradeciemento
string agradecimento() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	string mensagem = "";
	for (int i = 0; i < 18; ++i) {
		mensagem += "=";
	}
	mensagem += "  OBRIGADO! ";
	for (int i = 0; i < 18; ++i) {
		mensagem += "=";
	}
	return mensagem;
}



int main()
{
	//chamando funcao atenção
	cout << atencao();
	
	//solicita ao usuario que insira dois numeros
	int primeiro, segundo;
	setlocale(LC_ALL, "pt_BR.UTF-8");

	cout << "\n\nDigite um número : ";
	cin >> primeiro;
	cout << "\nDigite o segundo numero : ";
	cin >> segundo;

	//exibe os numeros antes da troca

	cout << "\nOs numeros digitados em sequencia foram: " << primeiro << " e " << segundo << "\n";
	
	// criando linha de divisão
	for (int i = 0; i < 48; ++i) {
		cout << "-";
	}
	//chama a função para trocar os valores usando ponteiros 

	trocaDeValores(&primeiro, &segundo);

	//exibe os numeros após a troca

	cout << "\nOs valores com a seguenquica inversa, são: "<< primeiro << " e " << segundo << "\n\n\n";

	//chamando funcao agradeciemnto
	cout << agradecimento();
	

}
