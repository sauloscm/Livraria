#include "menu.hpp"
#include <iostream>
#include <string>

Menu::Menu(Livraria& liv) : livraria(liv) {}

int Menu::exibirMenu() const {
    int opcao;
    std::cout << "Menu:\n";
    std::cout << "1. Listar Livros\n";
    std::cout << "2. Adicionar Livro\n";
    std::cout << "3. Editar Livro\n";
    std::cout << "4. Excluir Livro\n";
    std::cout << "5. Pesquisar Livro\n";
    std::cout << "6. Sair\n";
    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;
    return opcao;
}

void Menu::listarLivros() const {
    livraria.listarLivros();
}

void Menu::adicionarLivro() {
    std::string titulo, autor;
    int ano;
    std::cout << "Título do livro: ";
    std::cin.ignore();
    std::getline(std::cin, titulo);
    std::cout << "Autor do livro: ";
    std::getline(std::cin, autor);
    std::cout << "Ano de publicação: ";
    std::cin >> ano;
    livraria.adicionarLivro(Livro(titulo, autor, ano));
}

void Menu::menuEditarLivro() {
    std::cout << "Escolha o que deseja editar:\n";
    std::cout << "1. Nome do Livro\n";
    std::cout << "2. Nome do Autor\n";
    std::cout << "3. Ano de Publicação\n";
    std::cout << "Escolha uma opção: ";
}


void Menu::editarLivro() {
    std::string titulo;
    std::cout << "Título do livro a ser editado: ";
    std::cin.ignore();
    std::getline(std::cin, titulo);

    std::string novoNome; 
    std::string novoAutor;
    
    // chamando a função menuEditarLivro para mostrar as opções
    menuEditarLivro();

    int opcao;
    std::cin >> opcao;
    
    switch (opcao) {
        case 1:
            // Editar nome do livro
            std::cout << "Novo nome do livro: ";
            std::cin.ignore();
            std::getline(std::cin, novoNome);
            livraria.editarLivro(titulo, novoNome, "", 0);
            break;
        case 2:
            // Editar nome do autor
            std::cout << "Novo nome do autor: ";
            std::cin.ignore();
            std::getline(std::cin, novoAutor);
            livraria.editarLivro(titulo, "", novoAutor, 0);
            break;
        case 3:
            // Editar ano de publicação
            int novoAno;
            std::cout << "Novo ano de publicação: ";
            std::cin >> novoAno;
            livraria.editarLivro(titulo, "", "", novoAno);
            break;
        default:
            std::cout << "Opção inválida. Tente novamente.\n";
    }
}




void Menu::excluirLivro() {
    std::string titulo;
    std::cout << "Título do livro a ser excluído: ";
    std::cin.ignore();
    std::getline(std::cin, titulo);
    livraria.excluirLivro(titulo);
}

void Menu::pesquisarLivro() const {
    std::string titulo;
    std::cout << "Título do livro a ser pesquisado: ";
    std::cin.ignore();
    std::getline(std::cin, titulo);
    livraria.pesquisarLivro(titulo);
}

void Menu::executar() {
    int opcao;
    do {
        opcao = exibirMenu();

        switch (opcao) {
            case 1:
                listarLivros();
                break;
            case 2:
                adicionarLivro();
                break;
            case 3:
                editarLivro();
                break;
            case 4:
                excluirLivro();
                break;
            case 5:
                pesquisarLivro();
                break;
            case 6:
                std::cout << "Saindo do programa.\n";
                break;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    } while (opcao != 6);
}
