#include <iostream>
#include <string>
#include <fstream>

void show_usage(std::string const prog_name);

int main(int argc, char *argv[]){
    std::ifstream arquivo_entrada("nomearquivo.txt"); // cin
    std::ofstream arquivo_saida("arquivo.txt", std::ios::app); // cout

    if(arquivo_saida.fail()){
        std::cout << "Arquivo não encontrado." << std::endl;
        return 1;
    }

    // std::string nome;

    // arquivo_entrada >> nome;
    // arquivo_saida << "João" << std::endl;

    std::string arg = "add";

    if(argc == 1){
        show_usage(argv[0]);
        return -1;
    }

    std::string action = argv[1];

    if(action != "add"){
        show_usage(argv[0]);
        return -1;
    }
    
    std::string mensagem;

    if(argc == 2){
        std::cout << "Informe a mensagem a ser impressa: " << std::endl;
        std::cin >> mensagem; 
    }
    else{
        mensagem = argv[2];
    }

    arquivo_saida << mensagem << std::endl;
    std::cout << "Mensagem adicionada!" << std::endl;
}

void show_usage(std::string const prog_name){
    std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}
