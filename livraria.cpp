#include "livraria.hpp"
#include <iostream>
#include <algorithm>
//
Livraria::Livraria() {}

void Livraria::adicionarLivro(const Livro& livro) {
    livros.push_back(livro);
}

void Livraria::listarLivros() const {
    std::cout << "Livros na livraria:\n";
    for (const Livro& livro : livros) {
        std::cout << "Título: " << livro.getTitulo() << ", Autor: " << livro.getAutor()
                  << ", Ano de Publicação: " << livro.getAnoPublicacao() << std::endl;
    }
}

void Livraria::editarLivro(const std::string& titulo, int novoAno) {
    for (Livro& livro : livros) {
        if (livro.getTitulo() == titulo) {
            livro.setAnoPublicacao(novoAno);
            std::cout << "Informações do livro atualizadas." << std::endl;
            return;
        }
    }
    std::cout << "Livro não encontrado." << std::endl;
}

void Livraria::editarLivro(const std::string& titulo, const std::string& novoNome, const std::string& novoAutor, int novoAno) {
    for (Livro& livro : livros) {
        if (livro.getTitulo() == titulo) {
            if (!novoNome.empty()) {
                livro.setNome(novoNome);
            }
            if (!novoAutor.empty()) {
                livro.setAutor(novoAutor);
            }
            if (novoAno != 0) {
                livro.setAnoPublicacao(novoAno);
            }
            std::cout << "Informações do livro atualizadas." << std::endl;
            return;
        }
    }
    std::cout << "Livro não encontrado." << std::endl;
}

void Livraria::excluirLivro(const std::string& titulo) {
    auto it = std::remove_if(livros.begin(), livros.end(),
                             [titulo](const Livro& livro) { return livro.getTitulo() == titulo; });

    if (it != livros.end()) {
        livros.erase(it, livros.end());
        std::cout << "Livro removido da livraria." << std::endl;
    } else {
        std::cout << "Livro não encontrado." << std::endl;
    }
}

void Livraria::pesquisarLivro(const std::string& titulo) const {
    for (const Livro& livro : livros) {
        if (livro.getTitulo() == titulo) {
            std::cout << "Livro encontrado:\n";
            std::cout << "Título: " << livro.getTitulo() << ", Autor: " << livro.getAutor()
                      << ", Ano de Publicação: " << livro.getAnoPublicacao() << std::endl;
            return;
        }
    }
    std::cout << "Livro não encontrado." << std::endl;
}
